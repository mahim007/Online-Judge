#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 29

ll a[mxn][mxn],b[mxn][mxn];
ll n,m;

void cpy(){
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            b[i][j]=a[i][j];
        }
    }
}

void swp_col(ll x,ll y){
    for(ll i=1;i<=n;i++){
        swap(b[i][x],b[i][y]);
    }

//    for(ll i=1;i<=n;i++){
//        for(ll j=1;j<=m;j++){
//            cout<<b[i][j]<<" ";
//        } cout<<"\n";
//    }
}

ll check(){
    ll cnt=0;
    for(ll i=1;i<=n;i++){
            cnt=0;
        for(ll j=1;j<=m;j++){
            if(b[i][j]!=j) cnt++;
        }
        //cout<<cnt<<"\n";
        if(cnt>2) return 0ll;
    }

    return 1ll;
}

int main(){
    ll i,j,f=0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
        }
    }

    for(i=1;i<=m;i++){
        for(j=i;j<=m;j++){
            cpy();
            swp_col(i,j);
            if(check()){
                f=1;
            }
        }
    }

    if(f) printf("YES\n");
    else printf("NO\n");

    return 0;
}
