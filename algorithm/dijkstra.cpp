#include<bits/stdc++.h>
using namespace std;
vector<int>G[100],cost[100];
int d[100];
struct node
{
    int u,w;
    node(int a,int b)
    {
        u=a;
        w=b;
    }
    bool operator < (const node &p) const
    {
        return w<p.w;
    }
};

void dijkstra(int src)
{
    priority_queue<node>pq;
    memset(d,50,sizeof(d));
    d[src]=0;
    pq.push(node(src,d[src]));
    while(!pq.empty())
    {
        node top=pq.top();
        pq.pop();
        int u=top.u;
        for(int i=0;i<(int)G[u].size();i++)
        {
            int v=G[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                pq.push(node(v,d[v]));
            }
        }
    }
}

int main()
{
    int N,E;
    scanf("%d %d",&N,&E);
    for(int i=1;i<=E;i++)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        G[x].push_back(y);
        cost[x].push_back(z);
    }
    int src;
    scanf("%d",&src);
    dijkstra(src);
    for(int i=1;i<=N;i++)
    {
        printf("src %d to node %d distance %d\n",src,i,d[i]);
    }
    return 0;
}


