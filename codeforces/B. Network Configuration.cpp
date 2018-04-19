#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109

ll a[mxn];

int main(){
    ll n,k,i;
    scanf("%lld %lld",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }

    sort(a+1,a+1+n);
    reverse(a+1,a+1+n);
    printf("%lld\n",a[k]);
    return 0;
}
