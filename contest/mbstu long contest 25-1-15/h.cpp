#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 1000000
#define maxx2 78500
bool range[maxx];
i64 prim[maxx2];

int main()
{
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

    i64 k=0;
    for(i64 i=0;i<maxx;i++)
    {
        if(range[i]==0)
            prim[k++]=i;
    }
    i64 p1,p2,n,i,j,flag;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;

        flag=1;
        for(i=0;prim[i]<=n/2;i++)
        {
            if(flag==0)
                break;
            for(j=i;prim[i]+prim[j]<=n;j++)
            {
                if(prim[i]+prim[j]==n)
                {
                    p1=prim[i];
                    p2=prim[j];
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0)
            printf("%lld = %lld + %lld\n",n,p1,p2);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
