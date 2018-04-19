#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll u,v,t,d,i,j,ans,s;
    while(cin>>s>>v)
    {
        u=s;
        cin>>t>>d;
        if(d==0)
        {
            printf("%lld\n",u*t);
            continue;
        }
        ll xx[t+1],yy[t+1];
        for(i=1;i<=t;i++)
        {
            xx[i]=u;
            u=u+d;
        }
        u=s;
        for(i=t;i>=1;i--)
        {
            yy[i]=v;
            v=v+d;
        }
        ans=0;
        for(i=1;i<=t;i++)
        {
            if(xx[i]<yy[i])
            {
                ans+=xx[i];
            }
            else
            {
                ans+=yy[i];
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
