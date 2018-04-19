#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,m,i,f=0,ans;
    cin>>n>>m;
    for(i=1;m*i<=10000;i++){
        ll d=m*i;
        ll l=d;
        ll r=d*2;
        if(n>=l && n<=r){
            f=1;
            ans=d;
            break;
        }

        if(l>n) break;
    }

    if(f) cout<<ans<<"\n";
    else cout<<-1<<"\n";

    return 0;
}
