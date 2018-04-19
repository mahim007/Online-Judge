#include<bits/stdc++.h>
using namespace std;
#define maxx 100
vector<int>G[maxx],cost[maxx];
int d[3][maxx],vis[3][maxx];

struct node
{
    int t,u,w;
    node(int a,int b,int c){t=a;u=b;w=c;}
    bool operator < (const node &p) const
    {
        return w>p.w;
    }
};

void dijkstra2(int src)
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
        int t=top.t;
        int u=top.u;

        if(vis[t][u])
            continue;
        vis[t][u]=1;

        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            int alt=d[t][u]+cost[u][i];
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
    int N,E,T,t;
    scanf("%d %d",&N,&E);
    for(int i=1;i<=E;i++)
    {
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        G[u].push_back(v);
        G[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    dijkstra2(1);
    printf("src:%d 2nd best shortest path to %d is %d\n",1,N,d[2][N]);
    return 0;
}
