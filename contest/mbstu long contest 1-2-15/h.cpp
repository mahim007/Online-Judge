#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
#define maxx 1000009
i64 phi[maxx];

int main()
{
    for(i64 i=1;i<maxx;i++)
        phi[i]=i;
    for(i64 i=2;i<maxx;i++)
    {
        if(phi[i]==i)
        {
            for(i64 j=i;j<maxx;j=j+i)
            {
                phi[j]=phi[j]-(phi[j]/i);
            }
        }
    }

    i64 T,t,n,i,ret;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%lld",&n);
        printf("%lld\n",phi[n]);
    }
    return 0;
}
