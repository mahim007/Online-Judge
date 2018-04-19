#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[109],n;
vector<ll>V;

ll calculate(){
    ll i,j,k,ret=1;
    for(i=1;i<n-1;i++){
        ll cnt=V[i]-V[i-1];
        if(cnt>ret) ret=cnt;
    }

    return ret;
}

int main(){
    iostream::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll mx=99999;
    ll i,j,k,cnt;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=2;i<n;i++){
        for(j=1;j<=n;j++){
            if(i!=j) V.push_back(a[j]);
        }
        cnt=calculate();
        if(cnt<mx) mx=cnt;
        V.clear();
    }

    cout<<mx<<"\n";
    return 0;
}
