#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i,j,k,sum,t,T,n;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        sum=0;
        string s;
        cin>>n;
        printf("Case %lld:\n",t);
        for(i=1;i<=n;i++)
        {
            cin>>s;
            if(s=="donate")
            {
                ll v;
                cin>>v;
                sum+=v;
            }
            else
                cout<<sum<<endl;

        }
    }
    return 0;
}
