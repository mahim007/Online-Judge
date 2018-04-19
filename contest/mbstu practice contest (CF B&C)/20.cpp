#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll dp[109];
ll dp2[109];

int main(){
    ll n,k,d,i,j;
    cin>>n>>k>>d;
    dp[0]=1;
    dp2[0]=1;
    for(i=1;i<=n;i++){
        ll d=max(i-k,0ll);
        ll tmp=0;
        for(j=i-1;j>=d;j--){
            tmp+=dp[j];
            tmp%=mod;
        }

        dp[i]=tmp;
        dp[i]%=mod;
    }

    for(i=1;i<=n;i++){
        ll tmp=0;
        for(j=i-1;j>=max(0ll,i-d+1);j--){
            tmp+=dp2[j];
            tmp%=mod;
        }

        dp2[i]=tmp;
        dp2[i]%=mod;
    } //cout<<dp[n]<<" "<<dp2[n]<<"\n";

    cout<<(dp[n]-dp2[n]+mod)%mod<<"\n";
    return 0;
}
