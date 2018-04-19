#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll c,d,n;
ll dp[10009];

ll call(ll sum){
    if(sum<=0) return 0ll;
    if(dp[sum]!=-1) return dp[sum];
    ll p1=c+call(sum-n);
    ll p2=d+call(sum-1);
    return dp[sum]=min(p1,p2);
}

int main(){
    ll m,k,i,j;
    scanf("%lld %lld",&c,&d);
    scanf("%lld %lld",&n,&m);
    scanf("%lld",&k);
    memset(dp,-1,sizeof dp);
    ll ans=call(n*m-k);
    printf("%lld\n",ans);
    return 0;
}
