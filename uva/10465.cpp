#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 30009

ll dp[mxn];

int main(){
    ll n,m,t,i,j,k;
    while(scanf("%lld %lld %lld",&n,&m,&t)==3){
        memset(dp,0,sizeof dp);
        dp[n]=dp[m]=1;
        for(i=0;i<t;i++){
            if(dp[i]){
                dp[i+n]=max(dp[i+n],dp[i]+1);
                dp[i+m]=max(dp[i+m],dp[i]+1);
            }
        }

        if(dp[t]!=0){
            printf("%lld\n",dp[t]);
        }
        else{
            ll f=0;
            for(i=t;i>=0;i--){
                if(dp[i]!=0){
                    f=1;
                    printf("%lld %lld\n",dp[i],t-i);
                    break;
                }
            }

            if(f==0){
                printf("0 %lld\n",t);
            }
        }
    }

    return 0;
}
