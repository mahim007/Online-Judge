#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
ll check(ll x){
    if(x>=1 && x<=n) return 1;
    else return 0;
}

int main(){
    ll a,b,c,d,w,x,y,z,ans=0;
    cin>>n>>a>>b>>c>>d;
    for(x=1;x<=n;x++){
        w=x+c-b;
        y=w+a-d;
        z=w+a+b-c-d;
        if(check(w) && check(y) && check(z))
            ans++;
    }

    ans*=n;
    cout<<ans<<endl;
    return 0;
}
