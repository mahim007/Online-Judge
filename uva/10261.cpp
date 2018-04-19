#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[101][10001];
ll vis[101][10001];
ll coin[101];
ll side[101];
ll t,limit,N;

ll knapsack(ll i,ll amount){

}

int main(){
    ll t,T,i,j,d;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&limit);
        limit*=100;
        i=1;
        while(1){
            scanf("%lld",&d);
            if(d==0) break;
            else coin[i]=d;
            i++;
        }
        N=i-1;
        ll ans;

    }
}
