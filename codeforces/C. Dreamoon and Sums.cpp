#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
    ll a,b,ans=0;
    cin>>a>>b;
    for(ll i=1;i<=a;i++){
        ans+=(((b*(b-1)/2)%mod)*(((b*i)+1)%mod))%mod;
        ans%=mod;
    }

    cout<<ans<<"\n";
    return 0;
}
