#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 39

ll a[mxn];
ll b[mxn];

ll ncr(ll n,ll r){
    for(ll i=1;i<=n;i++) a[i]=i;
    ll p=max(r,n-r);
    ll mn=min(r,n-r);
    for(ll i=1;i<=p;i++) a[i]=1;
    for(ll i=1;i<=mn;i++) b[i]=i;

    for(ll i=p+1;i<=n;i++){
        for(ll j=1;j<=mn;j++){
            ll gcd=__gcd(a[i],b[j]);
            a[i]/=gcd;
            b[j]/=gcd;
        }
    }

    ll x=1;
    for(ll i=1;i<=n;i++) x*=a[i];
    return x;
}

int main(){
    ll n,q,i,j,k,ans=1,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        if(q==0) ans=1;
        else if(q==1) ans=n*n;
        else if(q>n) ans=0;
        else{
            ans=ncr(n,q);
            for(i=0;i<q;i++) ans*=n-i;
        }

        printf("Case %lld: %lld\n",t,ans);
    }

    return 0;
}
