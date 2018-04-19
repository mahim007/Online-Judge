#include<bits/stdc++.h>
using namespace std;
#define i64 unsigned long long int

int main()
{
    i64 t,T,a,b,ans;
    scanf("%llu",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%llu %llu",&a,&b);
        if(a==b)
        {
            printf("Case %llu: 2\n",t);
            continue;
        }

        if(__gcd(a,b)==1)
        {
            ans=a+b;
            printf("Case %llu: %llu\n",t,ans);
        }
        else
        {
            i64 n=__gcd(a,b);
            ans=(a+b)/n;
            printf("Case %llu: %llu\n",t,ans);
        }
    }
    return 0;
}
