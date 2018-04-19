#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maax 5009

i64 par[maax];
map<string,i64>M;

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
        par[v]=u; //cout<<par[u]<<" "<<par[v]<<endl;
    }
}

int main()
{
    i64 n,r,i;

    while(scanf("%lld %lld",&n,&r)==2)
    {
        if(n==0 && r==0)
            break;

        for(i=1;i<=n;i++)
            par[i]=-1;

        for(i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            M[s]=i; //cout<<s<<" "<<M[s]<<endl;
        }

        for(i=1;i<=r;i++)
        {
            string x,y;
            i64 u,v;
            cin>>x>>y;
            u=M[x];
            v=M[y];
            //cout<<x<<" "<<u<<endl;
            //cout<<y<<" "<<v<<endl;
            Union(u,v);
        }
        i64 ans=9999;
        for(i=1;i<=n;i++)
        {
            if(ans>par[i])
                ans=par[i];
        }
        if(ans==9999)
            ans=0;
        else
            ans=ans*(-1);
        printf("%lld\n",ans);
        M.clear();
    }
    return 0;
}
