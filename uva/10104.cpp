#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll egcd(ll a,ll b,ll &xo,ll &yo){
    if(b==0){
        xo=1;
        yo=0;
        return a;
    }
    ll x,y;
    ll d=egcd(b,a%b,x,y);
    xo=y;
    yo=x-(a/b)*y;
    return d;
}

int main(){
    ll a,b;
    while(scanf("%lld %lld",&a,&b)==2){
        ll xo,yo,gcd;
        gcd=egcd(a,b,xo,yo);
        printf("%lld %lld %lld\n",xo,yo,gcd);
    }
    return 0;
}
