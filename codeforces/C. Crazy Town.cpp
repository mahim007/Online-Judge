#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    iostream::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll x1,y1,x2,y2,n;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        ll s1=a*x1+b*y1+c;
        ll s2=a*x2+b*y2+c;
        if((s1<0 && s2>0) || (s1>0 && s2<0))
            ans++;
    }

    cout<<ans<<endl;
    return 0;
}
