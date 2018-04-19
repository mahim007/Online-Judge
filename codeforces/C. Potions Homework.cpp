#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define mod 10007
ll a[mxn],b[mxn];

int main(){
    ll n,i,ans=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        b[i]=a[i];
    }

    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    reverse(a+1,a+1+n);
    for(i=1;i<=n;i++){
        ans+=a[i]*b[i];
        ans%=mod;
    }

    printf("%lld\n",(ans+mod)%mod);
    return 0;
}
