#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[200][200];
int main(){
    ll T,t,i,j,k,l,n,mx,sum;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                ll x;
                scanf("%lld",&x);
                arr[i][j]=arr[i+n][j]=arr[i][j+n]=arr[i+n][j+n]=x;
            }
        }

        for(i=1;i<=2*n;i++){
            for(j=1;j<=2*n;j++){
                arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
            }
        }
        mx=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=i;k<i+n;k++){
                    for(l=j;l<n+j;l++){
                        sum=arr[k][l]-arr[i-1][l]-arr[k][j-1]+arr[i-1][j-1];
                        mx=max(mx,sum);
                    }
                }
            }
        }
        printf("%lld\n",mx);
    }
    return 0;
}
