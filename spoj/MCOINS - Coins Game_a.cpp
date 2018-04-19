#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1000009
ll dp[maax];
vector<ll>V,Q;
int main(){
    ll i,j,k,l,n;
    while(scanf("%lld %lld %lld",&k,&l,&n)==3){
        V.push_back(1);
        V.push_back(k);
        V.push_back(l);
        ll mx=-9999;
        for(i=1;i<=n;i++){
            ll d;
            scanf("%lld",&d);
            Q.push_back(d);
            if(d>mx){
                mx=d;
            }
        }

        dp[0]=0;
        for(i=1;i<=mx;i++){
            for(j=0;j<3;j++){
                if(i>=V[j] && !dp[i-V[j]]){
                    dp[i]=1;
                }
            }
        }

        for(i=0;i<n;i++){
            if(dp[Q[i]]){
                printf("A");
            }
            else{
                printf("B");
            }
        }

        printf("\n");
        memset(dp,0,sizeof dp);
    }
    return 0;
}
