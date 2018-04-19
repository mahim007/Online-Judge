#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int ch[125];
int main(){
    string s;
    cin>>s;
    ll i,j,k,ln,mx;
    ln=s.size();
    for(ll i=0;i<ln;i++){
        ch[s[i]]++;
    }
    mx=(ln+1)*26;
    for(ll i=97;i<=122;i++){
        mx=mx-ch[i];
    }
    cout<<mx<<endl;
    return 0;
}
