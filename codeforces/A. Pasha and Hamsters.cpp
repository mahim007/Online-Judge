#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109
ll a[mxn];

int main(){
    ll n,x,y,i,d;
    scanf("%lld %lld %lld",&n,&x,&y);
    for(i=1;i<=x;i++){
        scanf("%lld",&d);
        a[d]=1;
    }

    for(i=1;i<=y;i++){
        scanf("%lld",&d);
        a[d]=2;
    }

    for(i=1;i<=n;i++) printf("%lld ",a[i]);
    printf("\n");
    return 0;
}
