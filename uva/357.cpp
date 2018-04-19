#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[6][30002];
ll coin[]={1,5,10,25,50};

ll call(ll i,ll ammount){
    if(i>=5){
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
    call(0,30000);
    ll n;
    while(scanf("%lld",&n)==1){
        ll ans=call(0,n);
        if(ans==1){
            printf("There is only 1 way to produce %lld cents change.\n",n);
        }
        else{
            printf("There are %lld ways to produce %lld cents change.\n",ans,n);
        }
    }
    return 0;
}
