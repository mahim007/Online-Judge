#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll T,t,i,x,sum,n;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        cin>>n;
        sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x>=0)
                sum+=x;
        }
        printf("Case %lld: %lld\n",t,sum);
    }
    return 0;
}
