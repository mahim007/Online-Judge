#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 9999999999999
ll bigmod(ll p){
    ll ans=1;
    ll b=5;
    while(p){
        if(p&1) ans=((ans%mod)*(b%mod))%mod;
        p=p>>1;
        b=((b%mod)*(b%mod))%mod;
    }
    return ans%mod;
}

int main(){
    ll n;
    scanf("%lld",&n);
    //ll ans=bigmod(n);
    if(n==1) printf("5\n");
    else
        printf("%d\n",25);
    return 0;
}



