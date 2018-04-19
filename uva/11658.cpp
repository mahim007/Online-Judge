#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[101];
double dp[101][10009];
ll vis[101][10009];
ll N,t;

double call(ll i,ll amount){
    if(i==N){
        if(amount>5000)
            return (((double)10000*(double)arr[0])/(double)amount)/100.00;
        else return 0;
    }

    if(amount>5000){
        return (((double)10000*(double)arr[0])/(double)amount)/100.00;
    }

    if(vis[i][amount]==t)
        return dp[i][amount];

    double p1=0,p2=0;
    p1=call(i+1,amount+arr[i]);
    p2=call(i+1,amount);
    vis[i][amount]=t;
    return dp[i][amount]=max(p1,p2);
}

int main(){
    ll i,x,d;
    t=1;
    while(scanf("%lld %lld",&N,&x)==2){
        if(N==0 && x==0) break;
        for(i=0;i<N;i++){
            ll p,q;
            scanf("%lld.%lld",&p,&q);
            arr[i]=p*100+q;
        }

        swap(arr[0],arr[x-1]);
        double ans=1e-9+call(1,arr[0]);
        printf("%0.2lf\n",ans);
        t++;
    }
    return 0;
}
