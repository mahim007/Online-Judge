#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[4];
vector<ll>V[4];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,ans=0,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        a[d]++;
        V[d].push_back(i);
    }

    ans=min(a[1],min(a[2],a[3]));
    cout<<ans<<"\n";
    for(i=0;i<ans;i++)
        cout<<V[1][i]<<" "<<V[2][i]<<" "<<V[3][i]<<"\n";
    return 0;
}
