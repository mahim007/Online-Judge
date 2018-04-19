#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[1009];
ll dp[1009];
int main(){
    ll T,t,i,n,ans;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        for(i=2;i<n-1;i++){
            dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
        }
        ans=dp[n-2];
        dp[0]=0;
        dp[1]=arr[1];
        for(i=2;i<n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
        }
        ans=max(ans,dp[n-1]);
        printf("Case %lld: %lld\n",t,ans);
    }
    return 0;
}
