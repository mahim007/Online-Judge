#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 509
ll a[mxn];
int main(){
    ll n,m,i,j,k;
    double ans=0.0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);
    for(i=1;i<=m;i++){
        ll x,y,z;
        scanf("%lld %lld %lld",&x,&y,&z);
        ans=max(ans,(double)(a[x]+a[y])/(double)z);
    }

    printf("%0.15lf\n",ans);
    return 0;
}
