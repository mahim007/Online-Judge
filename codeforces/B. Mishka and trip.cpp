#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll a[mxn];
int main(){
    ll n,k,ans=0,s=0,i,j;
    scanf("%lld %lld",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        s+=a[i];
    }

    for(i=1;i<=k;i++){
        ll d;
        scanf("%lld",&d);
        ans+=((s-a[d])*a[d]);
        s-=a[d];
        a[d]=0;
    }

    for(i=1;i<n;i++){
        ans+=a[i]*a[i+1];
    }
    ans+=a[1]*a[n];
    printf("%lld\n",ans);
    return 0;
}
