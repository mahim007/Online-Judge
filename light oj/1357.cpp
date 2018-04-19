#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 100009
i64 par[maax];
i64 invite,diff,k;

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
        k++;
        diff=diff+k;
        par[u]=par[u]+par[v];
        par[v]=u;
    }
    else
        diff--;
}

int main()
{
    i64 T,t,n,i,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        memset(par,-1,sizeof(par));
        invite=diff=0;
        k=-1;
        scanf("%lld",&n);
        for(i=1;i<n;i++)
        {
            i64 u,v;
            scanf("%lld %lld",&u,&v);
            Union(u,v);
        }
        invite=maax+9;
        for(i=1;i<=n;i++)
        {//cout<<par[i]<<" ";
            if(invite>par[i])
                invite=par[i];
        } //cout<<"\n"<<invite<<endl;
        invite=(invite+1);
        invite=invite*(-1);
        printf("Case %lld: %lld %lld\n",t,invite,diff);
    }
    return 0;
}
