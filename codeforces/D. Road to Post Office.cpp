#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll d,k,a,b,t,ans=0;
    cin>>d>>k>>a>>b>>t;
    ll m=min(d,k);
    d-=m;
    ans+=a*m;
    if(d>0){
        m=min(d,k);
        if((t+(a*m))<(b*m)){
            ll mul=d/m;
            d-=(mul*m);
            ans+=mul*(t+(a*m));
        }
        else{
            ans+=d*b;
            cout<<ans<<"\n";
            return 0;
        }
    }

    if(d!=0){
        if((t+(a*d))<(b*d)){
            ans+=(t+(a*d));
        }
        else{
            ans+=(b*d);
        }
    }

    cout<<ans<<"\n";
    return 0;
}
