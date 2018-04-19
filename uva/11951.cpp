#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[101][101];
int main(){
    ll T,t,i,j,k,l,sum,mx,w,area,n,m,z;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld",&n,&m,&w);
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                scanf("%lld",&arr[i][j]);
                arr[i][j]+=arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
            }
        }

        mx=9999999999;
        area=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                for(k=i;k<=n;k++){
                    for(l=j;l<=m;l++){
                        ll x=arr[k][l]-arr[i-1][l]-arr[k][j-1]+arr[i-1][j-1];
                        z=(k-i+1)*(l-j+1);
                        if(x<=w){
                            if(z>area){
                                area=z;
                                mx=x;
                            }
                            else if(z==area && x<mx){
                                mx=x;
                            }
                        }
                        //cout<<"ans:"<<z<<" "<<x<<endl;
                    }
                }
            }
        }
        if(area==0) mx=0;
        printf("Case #%lld: %lld %lld\n",t,area,mx);
    }
    return 0;
}
