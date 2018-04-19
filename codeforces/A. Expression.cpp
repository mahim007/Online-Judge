#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,c,ans=1;
    cin>>a>>b>>c;
    ans=max(ans,a*b*c);
    ans=max(ans,a+b+c);
    ans=max(ans,(a+b)*c);
    ans=max(ans,a+(b*c));
    ans=max(ans,a*(b+c));
    ans=max(ans,(a*b)+c);
    cout<<ans<<"\n";
    return 0;
}
