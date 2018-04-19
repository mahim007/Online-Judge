#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,a,b,ans=-1,i,d;
    cin>>n>>d;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        if((a*100+b)<=(d*100)){
            ll x=(100-b)%100;
            if(x>ans) ans=x;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
