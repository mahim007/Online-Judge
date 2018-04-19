#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string p,q;
int main(){
    string ans;
    cin>>p>>q;
    ll sz=p.size();
    for(ll i=0;i<sz;i++){
        if(p[i]!=q[i]){
            ans+='1';
        }
        else
            ans+='0';
    }
    cout<<ans<<endl;
    return 0;
}
