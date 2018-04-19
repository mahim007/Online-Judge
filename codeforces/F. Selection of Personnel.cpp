#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[778][8];

ll calc(ll n,ll r){
    if(n==r) return 1;
    if(r==1) return n;
    if(dp[n][r]) return dp[n][r];
    dp[n][r]=calc(n-1,r)+calc(n-1,r-1);
    return dp[n][r];
}

int main(){
    ll n,ans=0;
    scanf("%lld",&n);
    ans+=calc(n,5); //cout<<ans<<endl;
    ans+=calc(n,6); //cout<<ans<<endl;
    ans+=calc(n,7); //cout<<ans<<endl;
    printf("%lld\n",ans);
    return 0;
}
