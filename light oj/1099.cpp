#include<bits/stdc++.h>
using namespace std;
#define maxx 5009
#define i64 long long int
vector<int>G[maxx],cost[maxx];
i64 d[3][maxx],vis[3][maxx];

struct node
{
    i64 t,u,w;
    node(i64 a,i64 b,i64 c){t=a;u=b;w=c;}
    bool operator < (const node &p) const
    {
        return w>p.w;
    }
};

void dijkstra2(i64 src)
{
    memset(d,50,sizeof(d));
    memset(vis,0,sizeof(vis));
    d[1][src]=0;
    priority_queue<node>pq;
    pq.push(node(1,src,0));

    while(!pq.empty())
    {
        node top=pq.top();
        pq.pop();
        i64 t=top.t;
        i64 u=top.u;

        if(vis[t][u])
            continue;
        vis[t][u]=1;

        for(i64 i=0;i<G[u].size();i++)
        {
            i64 v=G[u][i];
            i64 alt=d[t][u]+cost[u][i];
            if(alt<d[1][v])
            {
                d[2][v]=d[1][v];
                pq.push(node(2,v,d[2][v]));
                d[1][v]=alt;
                pq.push(node(1,v,d[1][v]));
            }
            else if(alt>d[1][v] && alt<d[2][v])
            {
                d[2][v]=alt;
                pq.push(node(2,v,d[2][v]));
            }
        }
    }
}




int main()
{
    i64 N,E,T,t;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&N,&E);
    for(i64 i=1;i<=E;i++)
    {
        i64 u,v,w;
        scanf("%lld %lld %lld",&u,&v,&w);
        G[u].push_back(v);
        G[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    dijkstra2(1);
    printf("Case %lld: %lld\n",t,d[2][N]);

    for(i64 i=0;i<=N;i++)
    {
        G[i].clear();
        cost[i].clear();
    }
    }
    return 0;
}

