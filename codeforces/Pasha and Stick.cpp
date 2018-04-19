#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    if(n&1){
        cout<<0<<endl;
    }
    else{
        ll ans=n/4;
        if(n%4==0) ans--;
        cout<<ans<<endl;
    }

    return 0;
}
