#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 20009
#define mxm 19

ll arr[mxn][mxm];
ll a[mxn],b[mxm];

int main(){
    ll n,m,q,i,j,k,ans=0,x,y;
    scanf("%lld %lld %lld",&n,&m,&q);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%lld",&arr[i][j]);
        }
    }

    for(k=1;k<=q;k++){
        scanf("%lld %lld",&x,&y);
        a[x]--;
        b[y]++;
    }

    for(i=1;i<=n;i++){
        ans=a[i];
        for(j=1;j<=m;j++){
            if(arr[i][j]==1){
                ans+=b[j];
            }
        }

        printf("%lld ",max(0ll,ans));
    }

    printf("\n");
    return 0;
}
