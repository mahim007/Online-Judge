#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll a[mxn];

int main(){
    ll i,j,k;
    for(i=1;i<mxn;i++){
        a[i]=a[i-1];
        if(i%3==0) a[i]+=i;
        if(i%5==0) a[i]+=i;
        if(i%15==0) a[i]-=i;
    }

    ll n;
    while(scanf("%lld",&n)==1){
        ll ans=a[n-1];
//        if(n%3==0) ans-=n;
//        if(n%5==0) ans-=n;

        printf("%lld\n",ans);
    }

    return 0;
}
