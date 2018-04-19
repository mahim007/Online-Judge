#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[51][21][1001];
ll limit[59];
ll coin[59];
ll make,n,t;

ll call(ll i,ll taken,ll ammount){
    if(i==n+1){
        if(ammount==make)
            return 1;
        else
            return 0;
    }

    if(ammount>make) return 0;
    if(ammount==make) return 1;
    if(dp[i][taken][ammount]!=-1)
        return dp[i][taken][ammount];
    ll p1=0,p2=0;
    if(taken<limit[i] && ammount+coin[i]<=make){
        p1=call(i,taken+1,ammount+coin[i]);
    }

    p2=call(i+1,0,ammount);
    return dp[i][taken][ammount]=(p1+p2)%100000007;
}

int main(){
    ll T,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&make);
        for(i=1;i<=n;i++){
            scanf("%lld",&coin[i]);
        }

        for(i=1;i<=n;i++){
            scanf("%lld",&limit[i]);
        }
        memset(dp,-1,sizeof dp);
        printf("Case %lld: %lld\n",t,call(1,0,0)%100000007);
    }
    return 0;
}
