#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll k,a,b,v;
    cin>>k>>a>>b>>v;
    ll i=0;
    while(a>0){
        ll mn=min(k-1,b);
        b-=mn;
        mn++;
        a=max(0LL,a-(mn*v));
        i++;
    }

    cout<<i<<"\n";
    return 0;
}
