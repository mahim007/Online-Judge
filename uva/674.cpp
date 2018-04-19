#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[6][7500];
ll coin[]={50,25,10,5,1};
ll make;

ll call(ll i,ll ammount){
    if(i>=5){
        if(ammount==0){
            return 1;
        }
        else{
            return 0;
        }
    }

    if(dp[i][ammount]!=-1){
        return dp[i][ammount];
    }

    ll p1=0,p2=0;
    if(ammount-coin[i]>=0){
        p1=call(i,ammount-coin[i]);
    }

    p2=call(i+1,ammount);
    return dp[i][ammount]=p1+p2;
}

int main(){
    memset(dp,-1,sizeof dp);
    call(0,7489);
    while(scanf("%lld",&make)==1){
        printf("%lld\n",call(0,make));
    }
    return 0;
}
