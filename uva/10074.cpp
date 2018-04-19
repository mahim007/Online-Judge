#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[101][101];
int main(){
    ll m,n,i,j,k,sum,mx,d;
    while(scanf("%lld %lld",&m,&n)==2){
        if(m+n==0) break;
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                scanf("%lld",&d);
                if(d==0) arr[i][j]=1;
                else arr[i][j]=-9999999999;
            }
        }

        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                arr[i][j]+=arr[i][j-1];
            }
        }

        mx=-9999999999;
        for(i=1;i<=n;i++){
            for(j=i;j<=n;j++){
                sum=0;
                for(k=1;k<=m;k++){
                    sum+=arr[k][j]-arr[k][i-1];
                    if(sum>mx) mx=sum;
                    if(sum<0) sum=0;
                }
            }
        }
        if(mx<0) mx=0;
        printf("%lld\n",mx);
    }
    return 0;
}
