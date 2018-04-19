#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[23][10002];
ll coin[23];

ll call(ll i,ll ammount){
    if(i>=22){
        if(ammount==0) return 1;
        else return 0;
    }
    if(ammount==0) return 1;
    if(dp[i][ammount]!=-1)
        return dp[i][ammount];
    ll p1=0,p2=0;
    if(ammount-coin[i]>=0){
        p1=call(i,ammount-coin[i]);
    }
    p2=call(i+1,ammount);
    return dp[i][ammount]=p1+p2;
}

int main(){
    memset(dp,-1,sizeof dp);
    for(ll i=1;i<=21;i++){
        coin[i]=i*i*i;
    }
    call(1,10000);
    ll n;
    while(scanf("%lld",&n)==1){
        printf("%lld\n",call(1,n));
    }
    return 0;
}
