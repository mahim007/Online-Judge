#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;

ll call(ll n){
    for(ll i=0;i<=n/2;i++){
        if(s[i]!=s[n-1-i]) return 0;
    }
    return 1;
}

int main(){
    ll ln,i,j,n=1;
    while(cin>>s){
    n=1;
    ln=s.size();
    for(i=0;i<=ln;i++){
        for(ll j=0;j<26;j++){
            s.insert(s.begin()+i,'a'+j);
            if(call(ln+1)){
                cout<<s<<"\n";
                n=0;
                break;
            }
            else{
                s.erase(s.begin()+i);
            }
        }
        if(!n) break;
    }
    if(n) cout<<"impossible\n";
    s.clear();
    }
    return 0;
}
