#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 1000009
ll dp[mx];
ll arr[10];

int main(){
    ll n,m,i,j;
    while(scanf("%lld %lld",&n,&m)==2){
        for(i=0;i<m;i++){
            scanf("%lld",&arr[i]);
        }
        dp[0]=0;
        for(i=1;i<=n;i++){
            dp[i]=0;
            for(j=0;j<m;j++){
                if(i>=arr[j] && !dp[i-arr[j]]){
                    dp[i]=1;
                }
            }
        }
        if(dp[n]==1){
            printf("Stan wins\n");
        }
        else{
            printf("Ollie wins\n");
        }
    }
    return 0;
}
