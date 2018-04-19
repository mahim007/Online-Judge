#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll a[mxn],b[mxn];
vector<ll>V;
int main(){
    ll n,i,j,k,q;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        V.push_back(a[i]);
    }

    sort(V.begin(),V.end());
    scanf("%lld",&q);
    for(i=1;i<=q;i++){
        ll d;
        scanf("%lld",&d);
        vector<ll>::iterator ans=upper_bound(V.begin(),V.end(),d);
        cout<<ans-V.begin()<<"\n";
    }

    return 0;
}
