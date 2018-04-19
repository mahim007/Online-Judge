#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1000000000
vector<ll>V;

ll getpow(ll b,ll p){
    ll ans=1;
    while(p){
        ans*=b;
        p--;
    }

    return ans;
}

ll digitsum(ll n){
    ll ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }

    return ans;
}

int main(){
    ll a,b,c,i,n;
    scanf("%lld %lld %lld",&a,&b,&c);
    n=0;
    for(i=1;i<=80;i++){
        //ll x=digitsum(i);
        ll d=b*getpow(i,a)+c;
        if(digitsum(d)==i && d<lim){
            n++;
            V.push_back(d);
        }
    }

    sort(V.begin(),V.end());
    printf("%lld\n",n);
    for(i=0;i<n;i++){
        printf("%lld ",V[i]);
    }

    return 0;
}
