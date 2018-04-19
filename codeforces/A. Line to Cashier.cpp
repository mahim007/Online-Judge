#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e16
#define mxn 109

ll a[mxn];
vector<ll>V[mxn];

int main(){
    ios_base::sync_with_stdio(0);

    ll n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=a[i];j++){
            ll d;
            cin>>d;
            V[i].push_back(d);
        }
    }

    ll ans=(ll)inf;
    ll cnt=0;

    for(i=1;i<=n;i++){
        cnt=0;
        for(j=0;j<V[i].size();j++){
            cnt+=V[i][j]*5;
        }

        cnt+=a[i]*15;
        ans=min(ans,cnt);
    }

    cout<<ans<<"\n";
    return 0;
}
