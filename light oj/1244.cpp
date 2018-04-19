#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10007
ll arr[mod];

int main(){
    arr[0]=arr[1]=1;
    arr[2]=2;
    arr[3]=5;
    for(ll i=4;i<=mod;i++){
        arr[i]=2*arr[i-1]+arr[i-3];
        arr[i]%=mod;
    }

    ll n,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",t,arr[n%(mod-1)]);
    }
    return 0;
}
