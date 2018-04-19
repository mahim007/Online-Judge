#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll n,k,a,b;
ll dp[100009];

ll call(ll i){
    if(i<0) return 0;
    if(i==0) return 1;
    if(dp[i]!=-1) return dp[i];
    ll p1=call(i-1);
    ll p2=0;
    p2=call(i-k);
    return dp[i]=(p1+p2)%mod;
}

int main(){
    ll i;
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    call(100000);
    for(i=1;i<=100000;i++){
        dp[i]+=dp[i-1];
        dp[i]%=mod;
    }
    for(i=1;i<=n;i++){
        cin>>a>>b;
        //ll ans=call(a);
        ll ans=(dp[b]-dp[a-1]+mod)%mod;
        cout<<ans<<"\n";
    }

    return 0;
}
