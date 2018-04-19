#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 500009
ll a[lim];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    ll n,i,j,k,s=0,ans=0,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
        a[i]+=a[i-1];
    }
    if(s%3){
        cout<<0<<"\n";
    }
    else{
        ll x=s/3;
        ll y=x*2;
        for(i=1;i<n;i++){
            if(a[i]==y) ans+=cnt;
            if(a[i]==x) cnt++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
