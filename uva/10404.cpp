#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 1000099
vector<ll>mv;
ll vis[mx],dp[mx],m;

ll valid(ll x){
    if(x>=0){
        return 1;
    }
    return 0;
}

ll min_max(ll x){
    if(x==0){
        return 0;
    }
    if(vis[x]!=0){
        return dp[x];
    }
    vis[x]=1;
    for(ll i=0;i<m;i++){
        if(valid(x-mv[i])){
            if(!min_max(x-mv[i])){
                return dp[x]=1;
            }
        }
    }
    return dp[x]=0;
}

int main(){
    ll n,i,d;
    while(scanf("%lld %lld",&n,&m)==2){
        mv.clear();
        for(i=1;i<=m;i++){
            scanf("%lld",&d);
            mv.push_back(d);
        }
        memset(vis,0,sizeof vis);
        memset(dp,0,sizeof dp);
        printf("%s",min_max(n)==1?"Stan":"Ollie");
        printf(" wins\n");
    }
    return 0;
}
