#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,m,a,b,ans=0;
    cin>>n>>m>>a>>b;
    ll mul=(n/m);
    if(mul==0) mul++;
    ll d=mul*m;
    ll k=min(d,n);
    if(mul*b<=k*a){
        ans+=(mul*b);
        n-=d;
    }
    else{
        ans+=(k*a);
        n-=k;
    }

    if(n>0){
        if(b<=n*a) ans+=b;
        else ans+=(n*a);
    }

    cout<<ans<<"\n";
    return 0;
}
