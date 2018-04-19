#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
int main()
{
    i64 n,b,h,w,miin,val,i,j,cost,flag=0;;
    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)==4)
    {
        miin=99999999;
        flag=0;
        i64 data[w];

        for(i=1;i<=h;i++)
        {
            scanf("%lld",&val);
            for(j=0;j<w;j++)
            {
                scanf("%lld",&data[j]);
            }
            if(val*n>b)
                continue;

            for(i64 k=0;k<w;k++)
            {
                if(data[k]>=n)
                {
                    flag=1;
                    cost=val*n;
                }
            }
            if(cost<miin)
                miin=cost;
        }
        if(flag==0)
            printf("stay home\n");
        else
            printf("%lld\n",miin);
    }
    return 0;
}
