#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 10009

ll a[mxn],b[mxn];

int main(){
    ll T,t,i,j,k,n,m,d,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        ans=0;
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            if(i!=n) ans+=a[i];
        }

        for(i=1;i<=m;i++){
            scanf("%lld",&b[i]);
            if(i!=m) ans+=b[i];
        }

        d=min(ans+a[n],ans+b[m]);
        printf("Case %lld: %lld\n",t,d);
    }

    return 0;
}
