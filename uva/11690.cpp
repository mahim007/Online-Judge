#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 10009

i64 par[maax];
i64 money[maax];

i64 findp(i64 u)
{
    if(par[u]==u)
        return u;
    return par[u]=findp(par[u]);
}

void Union(i64 u,i64 v)
{
    u=findp(u);
    v=findp(v);

    if(u!=v)
    {
        par[v]=u;
        money[u]=money[u]+money[v];
        money[v]=0;
    }
}

int main()
{
    i64 n,m,i,tk,T,t;

    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&n,&m);
        for(i=0;i<n;i++)
        {
            par[i]=i;
            scanf("%lld",&money[i]);
        }

        for(i=0;i<m;i++)
        {
            i64 u,v;
            scanf("%lld %lld",&u,&v);
            Union(u,v);
        }
        i64 flag=1;
        for(i=0;i<n;i++)
        {
            if(money[i]!=0)
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
