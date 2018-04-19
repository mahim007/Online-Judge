#include<bits/stdc++.h>
using namespace std;
#define maxx 10000000
#define i64 long long int
bool priim[maxx];
i64 prime[maxx];

int main()
{
    priim[0]=priim[1]=1;
    for(i64 i=4;i<maxx;i=i+2)
        priim[i]=1;
    i64 root=sqrt(maxx);
    for(i64 i=3;i<=root;i=i+2)
    {
        if(priim[i]==0)
        {
            for(i64 j=i*i;j<maxx;j=j+i)
            {
                priim[j]=1;
            }
        }
    }
    i64 m=0;
    for(i64 k=0;k<maxx;k++)
    {
        if(priim[k]==0)
        {
            prime[m++]=k;
        }
    }

    i64 T,t,N,counter;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        counter=0;
        scanf("%lld",&N);
        root=sqrt(N);
        for(i64 k=1;k<N;k++)
        {
            for(i64 i=0;prime[i]<=root;i++)
            {
                if(prime[i]>k)
                    break;
                if(k%prime[i]!=0 && N%prime[i]!=0)
                    {
                        counter++;
                        printf("%lld ",k);
                    }
            }
        }
        printf("Case %lld: %lld\n",t,counter);
    }

}
