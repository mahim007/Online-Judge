#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 301
#define inf 9999999999999
ll dp[maax][maax];
ll u[101],v[101];
int main(){
    ll T,t,i,j,ans,n,m,s,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&s);
        for(i=0;i<n;i++){
            scanf("%lld %lld",&u[i],&v[i]);
        }
        for(i=0;i<=s;i++){
            for(j=0;j<=s;j++){
                dp[i][j]=inf;
            }
        }
        dp[0][0]=0;
        for(i=0;i<n;i++){
            for(j=u[i];j<=s;j++){
                for(k=v[i];k<=s;k++){
                    dp[j][k]=min(dp[j][k],1+dp[j-u[i]][k-v[i]]);
                }
            }
        }
        ans=inf;
        ll sq=s*s;
        for(i=0;i<=s;i++){
            for(j=0;j<=s;j++){ //cout<<dp[i][j]<<" ";
                if(i*i+j*j==sq){
                    ans=min(ans,dp[i][j]);
                }
            }
            //cout<<endl;
        }
        if(ans==inf){
            printf("not possible\n");
        }
        else
            printf("%lld\n",ans);
    }
    return 0;
}
