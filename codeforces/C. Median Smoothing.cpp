#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[500009];

ll call(ll l,ll r){
    ll ln=r-l+1;
    if(ln<3) return 0;
    ll mid=(l+r)>>1;
    for(ll i=l+1;i<=mid;i++) a[i]=a[l];
    for(ll i=mid+1;i<r;i++) a[i]=a[r];
    return (ln-1)/2;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll n,i,ans=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    ll l=1;
    for(i=1;i<n;i++){
        if(a[i]==a[i+1]){
            ll ret=call(l,i);
            if(ret>ans) ans=ret;
            l=i+1;
        }
    }

    ll ret=call(l,n);
    if(ret>ans) ans=ret;
    cout<<ans<<"\n";
    for(i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
