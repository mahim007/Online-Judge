#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1009
ll a[6][lim],n;
ll dp[lim][lim];
vector<ll>V,P;

ll call(ll y,ll i,ll j){
    if(i>=V.size() || j>n) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    ll ans=0;
    if(V[i]==a[y][j]){
        ans=1+call(y,i+1,j+1);
    }
    else{
        ans=max(call(y,i,j+1),call(y,i+1,j));
    }
    return dp[i][j]=ans;
}

void printlcs(ll y,ll i,ll j){
    if(i>=V.size() || j>n) return;
    if(V[i]==a[y][j]){
        P.push_back(V[i]);
        printlcs(y,i+1,j+1);
    }
    else{
        if(dp[i][j+1]>dp[i+1][j]) printlcs(y,i,j+1);
        else printlcs(y,i+1,j);
    }
}

int main(){
    ll i,j,k,ans=lim;
    ll ret;
    scanf("%lld %lld",&n,&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=n;j++){
            scanf("%lld",&a[i][j]);
        }
    }

    for(i=1;i<=n;i++){
        V.push_back(a[1][i]);
    }

    //printlcs()

        for(j=2;j<=k;j++){ cout<<j<<"\n";
            memset(dp,-1,sizeof dp);
            ret=call(j,0,1);
            ans=min(ans,ret);
            printlcs(j,0,1);
            V.clear();
            for(i=0;i<P.size();i++) V[i]=P[i],cout<<V[i]<<" "; cout<<"\n";
            P.clear();
        }

    printf("%lld\n",ans);
    return 0;
}
