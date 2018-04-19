#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 n,a,i,res;
    while(scanf("%lld %lld",&n,&a)==2)
    {
        res=0;
        for(i=1;i<=n;i++)
        {
            res=res+(i*(i64)pow(a,i));
        }
        printf("%lld\n",res);
    }
    return 0;
}
