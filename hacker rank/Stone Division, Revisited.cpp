#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009

map<ll,ll>M;
ll arr[mxn];
ll m;


ll fun(ll n){ //cout<<" now:"<<n<<"\n";
    if(M.find(n)!=M.end()) return M[n];

    ll ret=0;
    for(ll i=1;i<=m;i++)
    if(n%arr[i]==0 && (n/arr[i]>1)){
        ret=max(ret,1ll+(fun(arr[i])*(n/arr[i])));
    }
    //cout<<"for n="<<n<<"result is:"<<ret<<endl;
    return M[n]=ret;
}

int main()
{
    ios_base::sync_with_stdio(0);

    ll q,i,j,k,n;
    cin>>q;
    for(k=1;k<=q;k++){
        cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>arr[i];
    }

    ll ans=0;
//    for(i=m;i>=1;i--){
//        ans=max(ans,fun(n,i)); //cout<<"now at:"<<i<<" "<<fun(n,i)<<"\n";
//    }

    ans=max(ans,fun(n));
    cout<<ans<<"\n";
    M.clear();
    }
    return 0;
}

