#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 317000
bool range[maxx];
i64 prim[maxx];
//vector<i64>V;

int main()
{
    //printf("prime generating starts\n");
    range[0]=range[1]=1;
    for(i64 i=4;i<maxx;i=i+2)
        range[i]=1;
    i64 root=(i64)sqrt(maxx);
    for(i64 i=3;i<=root;i=i+2)
    {
        if(range[i]==0)
        {
            for(i64 j=i*i;j<=maxx;j=j+i)
            {
                range[j]=1;
            }
        }
    }
    //printf("generating finished...\n");
    i64 k=0;
    for(i64 i=0;i<maxx;i++)
    {
        if(range[i]==0)
            prim[k++]=i;
    }
    //printf("copying primes finished...\n");

    i64 T,t,n,m,flag;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld %lld",&m,&n);
        if(m>n)
            {
                i64 t;
                t=m;
                m=n;
                n=t;
            }
        if(m==1)
            m++;
        if(m==0)
            m=m+2;
        for(i64 i=m;i<=n;i++)
        {
            flag=1;
            for(i64 j=0;prim[j]*prim[j]<=i;j++)
            {
                if((i%prim[j])==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                printf("%lld\n",i);

        }
        if(t<T)
            printf("\n");
    }
    return 0;
}
