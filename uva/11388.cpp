#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 T,t,g,l;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&g,&l);
        if(l%g==0)
            printf("%lld %lld\n",g,l);
        else
            printf("-1\n");
    }
    return 0;
}
