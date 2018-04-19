#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>V;

int main(){
    ios_base::sync_with_stdio(0);

    ll n,i,d,ans;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        V.push_back(d);
    }

    sort(V.begin(),V.end());
    ans=V[n-1]-V[0];
    if(n>=2)
    ans=min(ans,V[n-2]-V[0]);
    if(n>=2)
    ans=min(ans,V[n-1]-V[1]);

    cout<<ans<<"\n";

    return 0;
}
