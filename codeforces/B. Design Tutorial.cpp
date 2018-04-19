#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[2009];
ll n,k;

ll call(){
    ll ret=0;
    for(ll i=n;i>=1;i=i-k){
        ret+=a[i]-1;
        a[i]=-1;
    }

    //if(a[n]!=-1) ret+=a[n]-1;
    return 2*ret;
}

int main(){
    cin>>n>>k;
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    ll ans=call();
    cout<<ans<<"\n";
    return 0;
}
