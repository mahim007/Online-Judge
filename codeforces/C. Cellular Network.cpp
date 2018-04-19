#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll n,m;
ll city[mxn],tower[mxn];

ll call(ll i,ll k){
    return abs(city[i]-tower[k]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll i,j,k,ans=0,x;
    cin>>n>>m;
    for(i=1;i<=n;i++) cin>>city[i];
    for(i=1;i<=m;i++) cin>>tower[i];
    k=1;
    for(i=1;i<=n;i++){
        while(tower[k]==tower[k+1]) k++;
        while(k<m && call(i,k)>=call(i,k+1)) k++;
        ans=max(ans,call(i,k));

    }

    cout<<ans<<"\n";
    return 0;
}
