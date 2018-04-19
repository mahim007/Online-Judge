#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100011];
ll n;

ll bin_src(ll d){
    ll l=1,r=n;
    while(l<r){
        ll m=(l+r)/2;
        if(a[m]<d) l=m+1;
        else r=m;
    }

    return l;
}

int main(){
    ios_base::sync_with_stdio(0);
    ll i,j,k,m,q;
    cin>>n;
    a[0]=0;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++) a[i]+=a[i-1];
    cin>>m;
    for(i=1;i<=m;i++){
        cin>>q;
        ll ans=bin_src(q);
        cout<<ans<<"\n";
    }

    return 0;
}
