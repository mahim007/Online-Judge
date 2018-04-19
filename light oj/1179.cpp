#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll call(ll n,ll k){
    if(n==1) return 1;
    else return ((call(n-1,k)+k-1)%n)+1;
}

int main(){
    ll T,t,n,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&k);
        printf("Case %lld: %lld\n",t,call(n,k));
    }
    return 0;
}
