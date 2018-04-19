#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 2009
ll a[mxn][mxn];
ll d1[2*mxn],d2[2*mxn],c[2];
pair<ll,ll>P[2];

void call(ll p,ll i,ll j,ll tot){
    if(tot>c[p]){
        c[p]=tot;
        P[p].first=i;
        P[p].second=j;
    }
}

int main(){
    ll n,i,j,k;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%lld",&a[i][j]);
            d1[i+j]+=a[i][j];
            d2[i-j+n]+=a[i][j];
        }
    }

    c[0]=c[1]=-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            call((i+j)&1,i,j,d1[i+j]+d2[i-j+n]-a[i][j]);
        }
    }

    printf("%lld\n",c[0]+c[1]);
    printf("%lld %lld %lld %lld\n",P[0].first,P[0].second,P[1].first,P[1].second);
    return 0;
}
