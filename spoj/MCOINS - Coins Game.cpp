#include<bits/stdc++.h>
using namespace std;
#define mx 1000009
#define ll long long int
bool dp[mx];
vector<ll>V;
int main(){
    ll i,j,k,l,m,t,n;
    while(scanf("%lld %lld %lld",&k,&l,&m)==3){
        V.push_back(1);
        V.push_back(k);
        V.push_back(l);
        for(t=1;t<=m;t++){
            scanf("%lld",&n);
            dp[0]=0;
            for(i=1;i<=n;i++){
                dp[i]=0;
                for(j=0;j<3;j++){
                    if(i>=V[j] && !dp[i-V[j]]){
                        dp[i]=1;
                    }
                }
            }
            if(dp[n]){
                printf("A");
            }
            else{
                printf("B");
            }
        }
        printf("\n");
        V.clear();
        memset(dp,0,sizeof dp);
    }
    return 0;
}
