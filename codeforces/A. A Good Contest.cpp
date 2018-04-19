#include<bits/stdc++.h>
using namespace std;

#define ll long long int
string s;

int main(){
    ll pre,next,flag=0;
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>s>>pre>>next;
        if(pre>=2400 && next>pre) flag=1;
    }

    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
