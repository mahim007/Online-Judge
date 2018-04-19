#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll ans=0,n,p,q,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>p>>q;
        if((q-p)>=2) ans++;
    }

    cout<<ans<<"\n";
    return 0;
}
