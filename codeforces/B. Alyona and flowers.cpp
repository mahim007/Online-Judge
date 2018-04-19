#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109

ll a[mxn];
ll b[mxn],c[mxn],d[mxn];


int main(){
    ll i,j,k,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=m;i++){
        cin>>b[i]>>c[i];
    }

    for(i=1;i<=n;i++) a[i]+=a[i-1];
    ll ans=0;
    for(i=1;i<=m;i++){
        ans=max(ans,ans+a[c[i]]-a[b[i]-1]);
    }
    cout<<ans<<"\n";
    return 0;
}
