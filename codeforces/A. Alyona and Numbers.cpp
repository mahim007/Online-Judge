#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll ans=0,i,j,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        ans+=((m+i)/5)-(i/5);
    }

    cout<<ans<<"\n";
    return 0;
}
