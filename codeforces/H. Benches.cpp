#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[109][109];

ll calc(ll n,ll r){
    //if(r==0) return 1;
    if(n==r) return 1;
    if(r==1) return n;
    if(dp[n][r]) return dp[n][r];
    return dp[n][r]=calc(n-1,r)+calc(n-1,r-1);
}

int main(){
    ll ncr,n,ans;
    cin>>n;
    //ll r=n-5;
    ans=calc(n,5)*n*(n-1)*(n-2)*(n-3)*(n-4);
    cout<<ans<<endl;
}
