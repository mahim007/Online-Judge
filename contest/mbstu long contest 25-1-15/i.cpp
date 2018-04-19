#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 32768
#define maxx2 3520
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

    i64 p1,p2,n,i,j,flag,cntr;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        cntr=0;
        for(i=0;prim[i]<=n/2;i++)
        {
            for(j=i;prim[i]+prim[j]<=n && j<maxx2;j++)
            {
                if(prim[i]+prim[j]==n)
                {
                    cntr++;
                }
            }
        }
        printf("%lld\n",cntr);
    }
    return 0;
}
