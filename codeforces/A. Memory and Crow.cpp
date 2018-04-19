#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll a[mxn];
ll b[mxn];
int main(){
    ll n,i,j,k;
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);
    b[n]=a[n];
    for(i=n-1;i>=1;i--){
        b[i]=a[i]+a[i+1];
    }

    for(i=1;i<=n;i++) printf("%lld ",b[i]);
    printf("\n");
    return 0;
}
