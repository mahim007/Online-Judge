#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 4294967295
ll n;

ll call(ll x){
    //if(x>=n) return 0ll;
    for(ll i=1;x<=mxn;i++){
        if(i&1) x=x*9;
        else x=x*2;

        if((i&1)==1 && n<=x) return 1;
        if((i&1)==0 && n<=x) return 0;
    }
}

int main(){
    ll ans=0;
    while(scanf("%lld",&n)==1){
        ans=call(1ll);
        if(ans==1) printf("Stan wins.\n");
        else printf("Ollie wins.\n");
    }

    return 0;
}
