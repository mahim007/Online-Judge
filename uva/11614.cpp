#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 T,t,n,res;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        res=(-1+sqrt(1+(8*n)))/2;
        printf("%lld\n",res);
    }
    return 0;
}
