#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 3009
bool range[maxx];
i64 prim[maxx];
i64 dataset[maxx];
i64 setup(i64 n)
{
    i64 cntr=0;
    i64 half=ceil(n/2);
    for(i64 i=0;prim[i]<=half;i++)
    {
        if(n%prim[i]==0)
            cntr++;
    }
    if(cntr==2)
        return 1;
    return 0;
}
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
        {
            prim[k++]=i;
        }
    }
    for(i64 i=6;i<maxx;i++)
    {
        dataset[i]=setup(i);
    }
    i64 N,res,cntr;
    while(scanf("%lld",&N)==1)
    {
        cntr=0;
        for(i64 i=6;i<=N;i++)
        {
            if(dataset[i]==1)
                cntr++;
        }
        printf("%lld\n",cntr);
    }
    return 0;
}
