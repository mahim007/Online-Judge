#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll a[mxn];

int main(){
    ll n,i,ans,c;
    scanf("%lld %lld",&n,&c);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }

    ans=1;
    for(i=2;i<=n;i++){
        if((a[i]-a[i-1])>c) ans=0;
        ans++;
    }

    printf("%lld\n",ans);
    return 0;
}
