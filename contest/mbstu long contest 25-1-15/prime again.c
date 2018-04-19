#include<stdio.h>
#define maxx 1000000
int tag[maxx];
long long int V[maxx/2];

int isprime(long long int n)
{
    int i;
    for(i=1;V[i]*V[i]<=n;i++)
    {
        if(n%V[i]==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long int i,j,k;
    tag[0]=tag[1]=1;
    for(i=4;i<=maxx;i=i+2)
        tag[i]=1;
    for(i=3;i*i<=maxx;i=i+2)
    {
        if(tag[i]==0)
        {
            for(j=i*i;j<=maxx;j=j+i+i)
                tag[j]=1;
        }
    }
    k=0;
    for(i=2;i<=maxx;i++)
    {
        if(tag[i]==0)
            V[k++]=i;
    }

    long long int T,t,n,x;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        for(x=n-1;x>=2;x--)
        {
            if(x<=maxx)
            {
                if(tag[x]==0)
                {
                    printf("%lld\n",x);
                    break;
                }
            }

            if(x&1)
            {
                int p=isprime(x);
                if(p==1)
                {
                    printf("%lld\n",x);
                    break;
                }
            }
        }
    }
    return 0;
}
