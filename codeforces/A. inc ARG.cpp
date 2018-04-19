#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[109];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i;
    char ch;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>ch;
        if(ch=='1') a[i]=1;
        else a[i]=0;
    }
    ll ans=0;
    for(i=1;i<=n;i++){
        if(a[i]) ans++;
        else{
            ans++;
            break;
        }
    }

    cout<<ans<<"\n";
    return 0;
}
