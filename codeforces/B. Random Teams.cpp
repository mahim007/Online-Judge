#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll call(ll n){
    ll s=1;
    for(ll i=n-2+1;i<=n;i++) s*=i;
    return (ll)s/2;
}

int main(){
    ll n,m,mx,mn;
    cin>>n>>m;
    mx=call(n-(m-1));
    if(n%m==0){
        mn=m*call(n/m);
    }
    else{
        ll x=floor(n/m);
        ll rem=n-(m*x);
        mn=(rem*call(x+1)+(m-rem)*call(x));
    }

    cout<<mn<<" "<<mx<<"\n";

    return 0;
}
