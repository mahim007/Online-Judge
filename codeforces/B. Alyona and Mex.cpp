#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
ll a[100009];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll i,j,k,n,ans;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    ans=1;
    for(i=1;i<=n;i++){
        if(ans<a[i]){
            a[i]=ans;
            ans++;
        }
        if(ans==a[i]){
            ans++;
        }
    }

    cout<<ans<<"\n";
    return 0;
}
