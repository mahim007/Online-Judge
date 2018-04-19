#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 50009

i64 par[maax];
//bool vis[maax];

i64 findp(i64 u)
{
    if(par[u]<=-1)
        return u;
    return par[u]=findp(par[u]);
}

void Union(i64 u,i64 v)
{
    u=findp(u);
    v=findp(v);

    if(u!=v)
    {
        par[u]=par[u]+par[v];
        par[v]=u;
    }
}

int main()
{
    i64 n,m,i,j,t=1;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;

        for(i=1;i<=n;i++)
            par[i]=-1;

        for(i=1;i<=m;i++)
        {
            i64 u,v;
            scanf("%lld %lld",&u,&v);
            Union(u,v);
        }

        i64 ans=0;
        for(i=1;i<=n;i++)
        {
            if(par[i]<=-1)
                ans++;
        }

        printf("Case %lld: %lld\n",t++,ans);
    }
    return 0;
}
