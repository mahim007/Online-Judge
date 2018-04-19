#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[109][109];
int main(){
    ll n,i,j,k,ans;
    while(scanf("%lld",&n)==1){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%lld",&arr[i][j]);
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                arr[i][j]+=arr[i][j-1];
            }
        }
        ans=-99999999999;
        for(i=1;i<=n;i++){
            for(j=i;j<=n;j++){
                ll sum=0;
                for(k=1;k<=n;k++){
                    sum+=arr[k][j]-arr[k][i-1];
                    if(sum>ans){
                        ans=sum;
                    }
                    if(sum<0){
                        sum=0;
                    }
                }
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}

