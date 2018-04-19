#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 3200
#define maxx2 3200
bool mark[maxx];
i64 prime[maxx2];
bool isprime(i64 n)
{
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i64 i=3;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    mark[0]=mark[1]=1;
    for(i64 i=4;i<=maxx;i=i+2)
        mark[i]=1;
    for(i64 i=3;i*i<=maxx;i=i+2)
    {
        if(mark[i]==0)
        {
            for(i64 j=i*i;j<=maxx;j=j+i+i)
            {
                mark[j]=1;
            }
        }
    }

    i64 k=0;
    for(i64 i=0;i<=maxx;i++)
    {
        if(mark[i]==0)
        {
            prime[k++]=i;
        }
    }

    i64 i,j,l,n,flag,a,b,c;
    while(scanf("%lld",&n)==1)
    {
        if(n<8)
        {
            printf("Impossible.\n");
            continue;
        }

        a=2;
        b=2+n%2;
        n=n-(a+b);
        if(n==4)
        {
            c=2;
            printf("%lld %lld %lld %lld\n",a,b,c,n-c);
            continue;
        }
        for(i=0;prime[i]<=n;i++)
        {
            c=prime[i];
            if(isprime(n-c))
            {
                printf("%lld %lld %lld %lld\n",a,b,c,n-c);
                break;
            }

        }
    }
    return 0;
}
