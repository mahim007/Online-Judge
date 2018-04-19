#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 509

ll a[mxn],b[mxn];

int main(){
    ll n,k,i,j,cnt;
    scanf("%lld %lld",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        b[i]=a[i];
    }

    cnt=0;
    for(i=2;i<=n;i++){
        if(b[i]+b[i-1]<k){
            b[i]+=k-(b[i]+b[i-1]);
        }
    }

    for(i=1;i<=n;i++){
        cnt+=(b[i]-a[i]);
    }

    printf("%lld\n",cnt);
    for(i=1;i<=n;i++) printf("%lld ",b[i]);
    printf("\n");

    return 0;
}
