#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 n,T,t,i,val;
    i64 data[10000];

    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {val=0;
        memset(data,0,sizeof(data));

        for(i=0;i<3;i++)
        {
            scanf("%lld",&data[i]);
        }
        scanf("%lld",&n);
        i64 dif=0;
        dif=abs(data[1]-data[0]);
        if(abs((data[2]-data[1]))==dif)
        {
            for(i=3;i<n;i++)
            {
                val=val+dif+data[i-1];
            }
            printf("Case %lld: %lld\n",t,val);
        }
        else
            printf("Case %lld: Error\n",t);

    }
    return 0;
}
