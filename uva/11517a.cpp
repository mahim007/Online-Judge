#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 20008
#define mx 20009
ll dp[101][mx];
ll vis[101][mx];
ll level[101][mx];
ll coin[101];
ll val[mx];
ll t,T,n,price;
ll fam,cn;
ll call(ll i,ll amount,ll k){//cout<<"now at:"<<i<<" "<<amount<<" "<<k<<endl;
    if(i>n){
        if(amount>=price && amount<mx){
            //val[amount]=min(val[amount],k);
            level[i][amount]=0; //cout<<"ammount:"<<amount<<" val:"<<val[amount]<<endl;
            return amount;
        }

        else return inf;
    }

    if(amount>=price && amount<mx){
        //val[amount]=min(val[amount],k); //cout<<"ammount:"<<amount<<" val:"<<val[amount]<<endl;
        level[i][amount]=0;
        return amount;
    }

    if(amount>=mx) return inf;
    if(vis[i][amount]==t){
        //level[i][amount]=min(level[i][amount],)
        return dp[i][amount];
    }

    ll p1=0,p2=0;
    p1=call(i+1,amount+coin[i],k+1);
    p2=call(i+1,amount,k); //cout<<"p1:"<<p1<<" p2:"<<p2<<endl;
    vis[i][amount]=t;
    if(p1<p2){
        dp[i][amount]=p1;
        level[i][amount]=level[i+1][amount+coin[i]]+1;
        if(p1<fam){
            fam=p1;
            cn=k;
        }
    }

    else if(p2<p1){
        dp[i][amount]=p2;
        level[i][amount]=level[i+1][amount];
        if(p2<fam){
            fam=p2;
            cn=k;
        }
    }

    else if(p1==p2){
        dp[i][amount]=p1;
        level[i][amount]=min(level[i+1][amount+coin[i]]+1,level[i+1][amount]);
    }

    return dp[i][amount];
}

int main(){
    ll i,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&price);
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&coin[i]);
        }

        fam=inf;
        cn=inf;
        for(i=0;i<mx;i++) val[i]=inf;
        ll ans=call(1,0,0);
        printf("%lld %lld\n",ans,level[1][0]); //cout<<level[4][50]<<endl;
    }

    return 0;
}
