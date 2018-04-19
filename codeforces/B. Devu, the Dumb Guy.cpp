#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll a[mxn];

int main(){
    ll n,x,i,j,k,ans=0;
    scanf("%lld %lld",&n,&x);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }

    sort(a+1,a+1+n);
    for(i=1;i<=n;i++){
        ans+=a[i]*x;
        x=max(1ll,x-1);
    }

    printf("%lld\n",ans);
    return 0;
}
