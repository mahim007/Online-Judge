#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[39][39];

ll ncr(ll n,ll r){
    if(r==1) return n;
    if(n==r) return 1;
    if(dp[n][r]) return dp[n][r];
    return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
}

int main(){
    ll n;
    cin>>n;
    ll ans=ncr(n-1,1)*ncr(4,1)*ncr(3,n-2);
    cout<<ans<<endl;
}
