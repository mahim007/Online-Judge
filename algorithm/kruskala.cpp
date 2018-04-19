#include<bits/stdc++.h>
using namespace std;
int mst(int n);
int parent[100];
int parentof(int r);

struct edge
{
    int x,y,w;
    bool operator < (const edge& p)const
    {
        return w<p.w;
    }
};

vector<edge>V;

int parentof(int r)
{
    if(parent[r]==r)
        return r;
    return parent[r]=parentof(parent[r]);
}
int mst(int n)
{
    sort(V.begin(),V.end());
    for(int i=1;i<=n;i++)
        parent[i]=i;

    int cnt=0,cost=0;
    for(int i=0;i<V.size();i++)
    {
        int u=parentof(V[i].x);
        int v=parentof(V[i].y);
        if(u!=v)
        {
            parent[u]=v;
            cost+=V[i].w;
            cnt++;
        }
        if(cnt==n-1)
            break;
    }
    return cost;
}

int main()
{
    int N,E;
    scanf("%d %d",&N,&E);
    for(int i=1;i<=E;i++)
    {
        int x,y,w;
        scanf("%d %d %d",&x,&y,&w);
        edge e;
        e.x=x;
        e.y=y;
        e.w=w;
        V.push_back(e);
    }
    printf("minimum cost:%d\n",mst(N));
    return 0;
}
