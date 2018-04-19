#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009

ll a[mxn][mxn];

int main(){
    ll n,i,j,s,q,k;
    scanf("%lld",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%lld",&a[i][j]);
        }
    }

    for(i=1;i<=n;i++){
        s+=a[i][i];
    }

    s=s%2;

    scanf("%lld",&q);
    for(k=1;k<=q;k++){
        ll d;
        scanf("%lld",&d);
        if(d==3){
            printf("%lld",s);
        }
        else{
            scanf("%lld",&d);
            s=1-s;
        }
    }

    return 0;
}
