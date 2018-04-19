#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[101][101];
int main(){
    ll T,t,i,j,k,n,r1,r2,c1,c2,sum,mx,s;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&s);
        for(i=1;i<=s;i++){
            for(j=1;j<=s;j++){
                arr[i][j]=1;
            }
        }

        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld %lld %lld %lld",&r1,&c1,&r2,&c2);
            for(j=r1;j<=r2;j++){
                for(k=c1;k<=c2;k++){
                    arr[j][k]=-9999999999;
                }
            }
        }

        for(i=1;i<=s;i++){
            for(j=1;j<=s;j++){
                arr[i][j]+=arr[i][j-1];
                //cout<<arr[i][j];
            } //cout<<endl;
        }

        mx=-9999999999;
        for(i=1;i<=s;i++){
            for(j=i;j<=s;j++){
                sum=0;
                for(k=1;k<=s;k++){
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
