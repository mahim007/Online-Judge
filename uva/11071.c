#include<stdio.h>
int main()
{
    long long int v,t,s;
    while(scanf("%lld %lld",&v,&t)==2)
    {
        s=0;
        s=v*2*t;
        printf("%lld\n",s);
    }
    return 0;
}
