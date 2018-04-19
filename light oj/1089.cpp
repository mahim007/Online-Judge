#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 50009
ll a[mxn],b[mxn];

int main(){
    ll T,t,i,j,k,n,q,p;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        for(j=1;j<=n;j++){
            scanf("%lld %lld",&a[j],&b[j]);
        }

        sort(a+1,a+1+n);
        sort(b+1,b+n+1);
        printf("Case %lld:\n",t);
        for(k=1;k<=q;k++){
            scanf("%lld",&p);
            ll d=upper_bound(a+1,a+1+n,p)-a;
            d=n-d;
            d+=lower_bound(b+1,b+1+n,p)-b;
            printf("%lld\n",n-d);
        }
    }

    return 0;
}
