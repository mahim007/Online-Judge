#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 300009
ll a[lim];
int main(){
    ll n,i,j,k,ans=0,s=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        s+=a[i];
    }

    ans=s;
    sort(a+1,a+n+1);
    for(i=1;i<n;i++){
        ans+=s;
        s-=a[i];
    }

    printf("%lld\n",ans);
    return 0;
}
