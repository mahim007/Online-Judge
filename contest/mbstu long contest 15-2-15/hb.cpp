#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<deque>
using namespace std;
#define i64 long long int
i64 data[1000009];
i64 maax[1000009];
i64 miin[1000009];
deque<i64>Q;
int main()
{
    int n,i,k;
    while(scanf("%d %d",&n,&k)==2)
    {
        Q.clear();
        for(i=0;i<n;i++)
            scanf("%lld",&data[i]);

        for(i=0;i<k;i++)
        {
            while(!Q.empty() && data[i]>=data[Q.back()])
                Q.pop_back();
            Q.push_back(i);
        }
        for(i=k;i<n;i++)
        {
            maax[i-k]=data[Q.front()];
            while(!Q.empty() && data[i]>=data[Q.back()])
                Q.pop_back();
            while(!Q.empty() && Q.front()<=i-k)
                Q.pop_front();
            Q.push_back(i);
        }
        maax[n-k]=data[Q.front()];

        Q.clear();
        for(i=0;i<k;i++)
        {
            while(!Q.empty() && data[i]<=data[Q.back()])
                Q.pop_back();
            Q.push_back(i);
        }
        for(i=k;i<n;i++)
        {
            miin[i-k]=data[Q.front()];
            while(!Q.empty() && data[i]<=data[Q.back()])
                Q.pop_back();
            while(!Q.empty() && Q.front()<=i-k)
                Q.pop_front();
            Q.push_back(i);
        }
        miin[n-k]=data[Q.front()];

        for(i=0;i<=n-k;i++)
        {
            if(i==0)
                printf("%lld",miin[i]);
            else
                printf(" %lld",miin[i]);
        }
        printf("\n");

        for(i=0;i<=n-k;i++)
        {

            if(i==0)
                printf("%lld",maax[i]);
            else
                printf(" %lld",maax[i]);
        }
        printf("\n");
    }
    return 0;
}
