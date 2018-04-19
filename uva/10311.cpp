#include<bits/stdc++.h>
using namespace std;
#define i64  long int
#define maxx 100000
#define maxx2 9593
bool mark[maxx];
i64 prime[maxx2];

bool isprime(i64 n)
{
    if(n<1)
        return 0;
    if(n==1 || n==2)
        return 1;
    if(n%2==0)
        return 0;

    for(i64 i=0;i<maxx2 && prime[i]*prime[i]<=n;i++)
    {
        if(n%prime[i]==0)
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

    i64 n,i,j,num1,num2,flag,mid;
    while(scanf("%ld",&n)==1)
    {
        i=0;
        if(n>4)
        {
            if(n%2==1)
            {
                if(isprime(n-2))
                    i=2;
            }
            else
            {
                i=n/2-1;
                if(i%2==0) i--;
                for(;i>0;i=i-2)
                {
                    if(i==1)
                        continue;
                    if(isprime(i) && isprime(n-i))
                        break;
                }

            }
        }

        if(i>0) printf("%ld is the sum of %ld and %ld.\n", n, i, n-i);
        else printf("%ld is not the sum of two primes!\n", n);
    }
    return 0;
}
