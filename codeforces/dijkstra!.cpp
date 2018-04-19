#include<bits/stdc++.h>
using namespace std;
#define maxx 100009
#define i64 long long int
vector<i64>G[maxx],cost[maxx];
i64 d[maxx],par[maxx];

struct node
{
    i64 u,w;
    node(i64 a,i64 b){u=a;w=b;}
    bool operator < (const node &p)const
    {
        return w>p.w;
    }
};

i64 dijkstra(i64 N)
{
    priority_queue<node>pq;
    pq.push(node(1,0));
    memset(d,60,sizeof(d));
    memset(par,-1,sizeof(par));
    d[1]=0;
    while(!pq.empty())
    {
        node top=pq.top();
        i64 u=top.u;
        pq.pop();

        if(u==N)
            return d[N];
        for(i64 i=0;i<(i64)G[u].size();i++)
        {
            i64 v=G[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                par[v]=u;
                pq.push(node(v,d[v]));
            }
        }
    }
    return -1;
}

int main()
{
    i64 N,E;
    while(scanf("%lld %lld",&N,&E)==2)
    {
        for(i64 i=1;i<=E;i++)
        {
            i64 x,y,z;
            scanf("%lld %lld %lld",&x,&y,&z);
            G[x].push_back(y);
            G[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        i64 res=dijkstra(N);
        if(res==-1)
            printf("-1\n");
        else
        {
            i64 lst=N;
            stack<i64>stk;
            while(N!=-1)
            {
                stk.push(N);
                N=par[N];
            }
            while(!stk.empty())
            {
                i64 X=stk.top();
                    printf("%lld ",X);
                stk.pop();
            }
            printf("\n");
        }
    }
    return 0;
}
