#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
ll a[lim];
ll mxam,mna;
map<ll,ll>M;

int main(){
    ll n,i,ans=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        M[a[i]]++;
    }
    for(i=1;i<=n;i++){ //cout<<"now:"<<a[i]<<"\n";
        ll d=a[i];
        M[d]--;
        ll x=1;
        for(ll j=0;j<33;j++){
            ll p=x<<j;
            ll rem=p-d; //cout<<p<<" rem:"<<rem<<endl;
            if(M[rem]){
                ans+=M[rem];
            }
        } //cout<<ans<<"\n";
    }

    cout<<ans<<"\n";
    return 0;
}
