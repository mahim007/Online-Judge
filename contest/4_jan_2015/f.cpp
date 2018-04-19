#include<bits/stdc++.h>
using namespace std;
#define i64 long long int

int main()
{
    i64 n,a,b,res;
    while(scanf("%lld %lld %lld",&n,&a,&b)==3)
    {
        res=2*n*a*b;
        printf("%lld\n",res);
    }
    return 0;
}
