#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 200009
ll a[mxn];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,i,j,k,ans=0,cnt=0,t,c;
    cin>>n>>t>>c;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    for(i=1;i<=n;i++){
        if(a[i]<=t) cnt++;
        else cnt=0;
        if(cnt>=c) ans++;
    }

    cout<<ans<<"\n";
    return 0;
}
