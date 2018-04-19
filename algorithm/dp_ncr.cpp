#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
#define maxx 100
i64 dp[maxx][maxx];

i64 ncr(i64 n,i64 r)
{
    if(r==1)
        return n;
    if(r==n)
        return 1;

    if(dp[n][r]!=-1)
        return dp[n][r];
    else
    {
        dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
        return dp[n][r];
    }
}


int main()
{
    i64 i,j;

    for(i=0;i<maxx;i++)
    {
        for(j=0;j<maxx;j++)
            dp[i][j]=-1;
    }

    i64 n,r;
    while(scanf("%lld %lld",&n,&r)==2)
    {
        if(n==-1 && r==-1)
            break;

        printf("%lld\n",ncr(n,r));
    }
    return 0;
}
