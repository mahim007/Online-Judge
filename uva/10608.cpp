#include<bits/stdc++.h>
//using namespace std;

#define i64 long long int
#define maax 30009
i64 par[maax];

i64 findparent(i64 u)
{
    if(par[u]<=-1)
        return u;

    return par[u]=findparent(par[u]);
}

void Union(i64 u,i64 v)
{
    u=findparent(u);
    v=findparent(v);

    if(u!=v)
    {
        par[u]=par[u]+par[v]; //cout<<"par[u]:"<<par[u]<<endl;
        par[v]=u; //cout<<"par[v]:"<<par[v]<<endl;
    }
}

int main()
{ //freopen("10608 output","w",stdout);
    i64 T,t,i,j,k,n,m,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        //cout<<"T:"<<T<<endl;
        scanf("%lld %lld",&n,&m);
        if(m==0)
        {
            printf("1\n",ans);
            continue;
        }
        //cout<<"n:"<<n<<" m:"<<m<<endl;
        for(i=1;i<=n;i++)
        {
            par[i]=-1;
            //cout<<par[i]<<endl;
        }

        for(k=1;k<=m;k++)
        {
            i64 u,v;
            scanf("%lld %lld",&u,&v);
            Union(u,v);
        }

        ans=999999999; //cout<<"ans:"<<ans<<endl;
        for(i=1;i<=n;i++)
        {
            if(ans>par[i])
                ans=par[i];
        }

        ans=ans*(-1);
        printf("%lld\n",ans);
    }
    return 0;
}
