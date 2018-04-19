#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
ll a[lim];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i,r=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    ll ans=0;
    for(i=0;i<n;i++){
        ans+=(a[i]-a[i+1]);
        if(ans<r) r=ans;
    }
    cout<<abs(r)<<"\n";
    return 0;
}
