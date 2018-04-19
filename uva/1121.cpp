#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
i64 data[1000009];
int main()
{
    i64 miin,dif,i,j,k,sum,n,val;
    while(scanf("%lld %lld",&n,&val)==2)
    {
        sum=0;
        miin=999999999;
        for(i=0;i<n;i++)
            scanf("%lld",&data[i]);
        i=j=0;
        while(i<n)
        {
            while(sum<val &&i<n)
            {
                sum=sum+data[i];
                i++;
            }
            if(i==n && sum<val) break;

            while(sum>=val && j<n)
            {
                sum=sum-data[j];
                j++;
            }
            dif=i-(j-1);
            if(dif<miin)
                miin=dif;
        }
        if(miin==999999999)
            miin=0;
        printf("%lld\n",miin);
    }
    return 0;
}
