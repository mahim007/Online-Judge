#include<stdio.h>
int sum(long long a)
{
    long long x=0;
    while(a>=1)
    {
        x=x+a%10;
        a=a/10;
    }
    return x;
}

int main()
{
    long long a,x,s;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
        break;
        while(a>9)
        {

            a=sum(a);
        }
        printf("%lld\n",a);
    }
    return 0;
}
