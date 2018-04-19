#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[10]={1,6,1,2,2,3,1,4,0,1};
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll ans,i,j;
    cin>>s;
    ans=1;
    for(i=0;i<s.size();i++){
        ll d=s[i]-'0';
        ans*=(1+a[d]);
    }

    cout<<ans<<"\n";
    return 0;
}
