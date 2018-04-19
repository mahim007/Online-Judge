#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 sum=0,n,t,m;
    string s;
    scanf("%lld",&n);
    for(t=1;t<=n;t++)
    {
        cin>>s;
        if(s=="donate")
        {
            scanf("%lld",&m);
            sum=sum+m;
        }
        else
            printf("%lld\n",sum);
    }
    return 0;
}
