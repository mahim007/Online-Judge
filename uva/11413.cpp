#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 ves,con;
i64 data[1001];
bool simulation(i64 mid)
{
    i64 i,k,sum=0;
    i=1;k=1;
    while(k<=con)
    {
        if(i>ves) return 1;
        if(sum+data[i]<=mid)
        {
            sum+=data[i];
            i++;
        }
        else
        {
            sum=0;
            k++;
        }
    }
    return 0;
}

int main()
{
    i64 low,high,ans,mid,i,j;
    while(scanf("%lld %lld",&ves,&con)==2)
    {
        low=high=ans=mid=0;
        for(i=1;i<=ves;i++)
        {
            scanf("%lld",&data[i]);
            if(data[i]>low)
                low=data[i];
            high+=data[i];
        }

        while(low<=high)
        {
            mid=(low+high)/2;
            if(simulation(mid)==0)
                low=mid+1;
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
