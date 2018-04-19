#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
vector<ll>ans;
int main(){
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++){
        ll d;
        cin>>d;
        M[d]=1;
    }

    ll k=1;
    while(k<=m){
        if(M[k]==0){
            ans.push_back(k);
            m-=k;
        }
        k++;
    }

    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
