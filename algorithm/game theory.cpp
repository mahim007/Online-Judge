#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100009
ll mv[]={1,3,5};
bool vis[mx],dp[mx];

bool valid(ll x){
    if(x>=0){
        return 1;
    }
    return 0;
}

bool min_max(ll x){
    if(x==0){
        return 0;
    }
    if(vis[x]!=0){
        return dp[x];
    }
    vis[x]=1;
    for(ll i=0;i<3;i++){
        if(valid(x-mv[i]) && !min_max(x-mv[i])){
            return dp[x]=1;
        }
    }
    return dp[x]=0;
}

int main(){
    ll n;
    while(scanf("%lld",&n)==1){
        memset(vis,0,sizeof vis);
        memset(dp,0,sizeof dp);
        printf("%s\n",min_max(n)==1?"Alice":"Bob");
    }
    return 0;
}
