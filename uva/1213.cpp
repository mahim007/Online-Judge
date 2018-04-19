#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool tag[1150];
vector<ll>V;
ll siz;
ll dp[191][15][1121];
ll vis[191][15][1121];
ll t;

void sieve(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<1150;i=i+2)
        tag[i]=1;
    ll root=sqrt(1150);
    for(ll i=3;i<root;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<1150;j=j+i+i)
                tag[j]=1;
        }
    }
    V.push_back(-1);
    for(ll i=2;i<1150;i++){
        if(tag[i]==0)
            V.push_back(i);
    }
}

ll knapsack(ll i,ll k,ll amount){
    if(i==siz || V[i]>amount){
        if(k==0 && amount==0) return 1;
        else return 0;
    }

    if(k==0){
        if(amount==0) return 1;
        else return 0;
    }
    //if() return 0;
    if(vis[i][k][amount]==t) return dp[i][k][amount];
    ll p1=0,p2=0;
    if(amount-V[i]>=0)
        p1=knapsack(i+1,k-1,amount-V[i]);
    p2=knapsack(i+1,k,amount);
    vis[i][k][amount]=t;
    return dp[i][k][amount]=p1+p2;
}

int main(){
    sieve();
    siz=V.size();
    //cout<<siz<<endl;
    t=1;
    ll n,k,i;
    while(scanf("%lld %lld",&n,&k)==2){
        if(n==0 && k==0) break;
        ll ans=knapsack(1,k,n);
        printf("%lld\n",ans);
        t++;
    }
    return 0;
}












