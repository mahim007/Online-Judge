#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 n,data[100009];

bool simulation(i64 mid)
{
    i64 i=1,pre=0;
    while(1)
    {
        if(i>n) return 1;
        if((data[i]-pre)<=mid)
        {
            if((data[i]-pre)==mid)
            {
                mid--;
            }
            pre=data[i];
            i++;
        }
        else
            return 0;
    }
}

int main()
{
    i64 low,mid,high,ans,T,t,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        low=mid=high=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&data[i]);
            if(high<data[i])
                high=data[i];
        }
        while(low<=high)
        {
            mid=(low+high)/2;

            if(simulation(mid)==0)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        printf("Case %lld: %lld\n",t,ans);
    }
    return 0;
}
