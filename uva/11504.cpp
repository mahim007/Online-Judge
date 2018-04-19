#include<bits/stdc++.h>
using namespace std;

#define MAX 100001
vector<long>G[MAX],topsort;
bool vis[MAX];
long n,e;

void dfs(long u)
{
    vis[u]=1;
    for(long i=0;i<G[u].size();i++)
    {
        long v=G[u][i];
        if(!vis[v])
            dfs(v);
    }
    topsort.push_back(u);
    return;
}

long SSC()
{
    memset(vis,0,sizeof(vis));
    for(long i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }
    memset(vis,0,sizeof(vis));
    long cnt=0;
    for(long i=topsort.size()-1;i>=0;i--)
    {
        long n=topsort[i];
        if(!vis[n])
        {
            cnt++;
            dfs(n);
        }
    }
    return cnt;
}

int main()
{
    long i,j,k,T,t;
    scanf("%ld",&T);
    //freopen("11504output","w",stdout);
    for(t=1;t<=T;t++)
    {
        scanf("%ld %ld",&n,&e);
        for(i=1;i<=e;i++)
        {
            long x,y;
            scanf("%ld %ld",&x,&y);
            G[x].push_back(y);
        }
        printf("%ld\n",SSC());
        topsort.clear();
        for(i=0;i<=n;i++)
            G[i].clear();
    }
    return 0;
}
