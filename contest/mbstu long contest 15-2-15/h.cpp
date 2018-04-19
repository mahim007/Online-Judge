#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define i64 long long int
i64 data[1000009];
vector<i64>miin;
vector<i64>maax;
int main()
{
    i64 n,i,j,k;
    while(scanf("%lld %lld",&n,&k)==2)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&data[i]);
        }

        for(i=0;i<=n-k;i++)
        {
            vector<i64>p;
            for(j=i;j<i+k;j++)
                p.push_back(data[j]);
            sort(p.begin(),p.end());
            miin.push_back(p[0]);
            maax.push_back(p[k-1]);

        }
        for(i=0;i<miin.size();i++)
        {
            if(i==miin.size()-1)
                printf("%lld\n",miin[i]);
            else
                printf("%lld ",miin[i]);
        }

        for(i=0;i<maax.size();i++)
        {
            if(i==maax.size()-1)
                printf("%lld\n",maax[i]);
            else
                printf("%lld ",maax[i]);
        }
//        data.clear();
        maax.clear();
        miin.clear();
    }
    return 0;
}
