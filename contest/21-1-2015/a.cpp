#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 n,a,b,t;

    scanf("%lld",&t);

    for(i64 i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        if(n>10)
        {
            a=n-10;
            b=n-a;
        }
        else
        {
            a=0;
            b=n;
        }
        printf("%lld %lld\n",a,b);

    }
    return 0;
}
