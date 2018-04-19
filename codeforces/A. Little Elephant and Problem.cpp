#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll a[mxn],b[mxn];

int main(){
    ll n,cnt,i,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        b[i]=a[i];
    }

    cnt=0;
    sort(b+1,b+1+n);
    for(i=1;i<=n;i++){
        if(a[i]!=b[i]) cnt++;
    }

    cnt++;

    if((ll)(cnt/2)<=1) printf("YES\n");
    else printf("NO\n");

    return 0;
}
