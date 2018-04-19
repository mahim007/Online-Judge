#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>parr;
vector<ll>narr;
map<ll,ll>M;
int main(){
    ll n,i,k,cnt,ans;
    cin>>n;
    for(i=1;i<=n;i++){
        ll pos,val;
        cin>>pos>>val;
        if(pos<0){
            narr.push_back(pos);
        }
        else{
            parr.push_back(pos);
        }
        M[pos]=val;
    }
    ll ps,ns;
    ps=parr.size();
    ns=narr.size();
    sort(parr.begin(),parr.end());
    sort(narr.begin(),narr.end());
    reverse(narr.begin(),narr.end());
    ans=0;
    for(i=0;i<ps && i<ns;i++){
        ans+=M[parr[i]]+M[narr[i]];
    }
    if(i==ps && i!=ns){
        ans+=M[narr[i]];
    }
    else if(i==ns && i!=ps){
        ans+=M[parr[i]];
    }
    cout<<ans<<endl;
    return 0;
}
