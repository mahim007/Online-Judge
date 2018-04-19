#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 20000000
#define maxx2 1270609
#define maxx3 1000009
bool range[maxx];
i64 prim[maxx2];
i64 p1[maxx3];
i64 p2[maxx3];

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
    i64 z=1;
    for(i64 i=0;i<maxx;i++)
    {
        if(range[i]==0)
            prim[k++]=i;
    }

    for(i64  i=0;i<maxx2;i++)
    {

        if(i>0)
        {
            if((prim[i]-prim[i-1])==2)
            {
                p2[z]=prim[i];
                p1[z]=prim[i-1];
                z++;
            }
        }
    }

    i64 n;
    while(scanf("%lld",&n)==1)
    {
        printf("(%lld, %lld)\n",p1[n],p2[n]);
    }
    return 0;

}
