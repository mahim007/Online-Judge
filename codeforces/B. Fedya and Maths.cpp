#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;

ll call(){
    ll ans=0;
    for(ll i=0;i<s.size();i++){
        ll d=s[i]-'0';
        ans=(ans*10+d)%4;
    }

    return ans%4;
}

ll pw(ll b,ll p){
    ll ans=1;
    for(ll i=1;i<=p;i++){
        ans*=b;
    }

    return ans;
}

int main(){
    ll d,n=0;
    cin>>s;
    n=call();
    ll ans=(1+pw(2,n)+pw(3,n)+pw(4,n))%5;
    printf("%lld\n",ans);
    return 0;
}
