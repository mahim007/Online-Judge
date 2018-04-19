#include<bits/stdc++.h>
using namespace std;
#define nd 100
vector<int>G[nd];
int color[nd];
int par[nd];
int d[nd],f[nd];
int Time;
#define white 0
#define grey 1
#define black 2
#define nil -1
#define inf 9999

void dfs_visit(int u)
{
    color[u]=grey;
    Time++;
    d[u]=Time;
    for(int i=0;i<G[u].size();i++)
    {
        int v=G[u][i];
        if(color[v]==white)
           {
                par[v]=u;
                dfs_visit(v);
           }
    }
    color[u]=black;
    Time++;
    f[u]=Time;
}

void dfs(int N)
{
    for(int u=1;u<=N;u++)
    {
        color[u]=white;
        par[u]=u;
        d[u]=inf;
        f[u]=inf;
    }
    Time=0;
    for(int u=1;u<=N;u++)
    {
        if(color[u]==white)
        {
            dfs_visit(u);
        }
    }

}

int main()
{
    int N,E;
    scanf("%d %d",&N,&E);
    for(int i=1;i<=E;i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
    }
    dfs(N);
    for(int i=1;i<=N;i++)
    {
        printf("node:%d parent:%d starting:%d end:%d\n",i,par[i],d[i],f[i]);
    }
    return 0;
}
