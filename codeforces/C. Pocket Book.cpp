#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define mxn 109

string s[mxn];
ll arr[mxn];
map<char,ll>M;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++) cin>>s[i];

    for(i=0;i<m;i++){
        for(j=1;j<=n;j++){
            M[s[j][i]]++;
        }

        arr[i]=M.size();
        M.clear();
    }

    ll ans=1;
    for(i=0;i<m;i++){
        ans=((ans)%mod*(arr[i])%mod)%mod;
    }

    cout<<ans<<"\n";
    return 0;
}
