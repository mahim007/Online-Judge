#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1009];
int main(){
    ll n,m,k,i;
    cin>>n>>m>>k;
    for(i=1;i<=m+1;i++){
        cin>>a[i];
    }
    ll ans=0;
    for(i=1;i<=m;i++){
        ll d=a[m+1];
        ll p=a[i];
        ll x=0;
        while(d || p){
            if((d&1)!=(p&1)) x++;
            d=d>>1;
            p=p>>1;
        }
        if(x<=k){
            ans++; //cout<<i<<" is frns\n";
        }
    }

    cout<<ans<<"\n";
    return 0;
}
