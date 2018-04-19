#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string a,b,c,s;
int main(){
    a="qwertyuiop";
    b="asdfghjkl;";
    c="zxcvbnm,./";

    char ch;
    cin>>ch;
    cin>>s;
    ll pos;
    if(ch=='L') pos=1;
    else pos=-1;

    for(ll i=0;i<s.size();i++){
        if(a.find(s[i])>=0 && a.find(s[i])<=10){
            ll p=a.find(s[i]);
            cout<<a[p+pos];
        }
        else if(b.find(s[i])>=0 && b.find(s[i])<=10){
            ll p=b.find(s[i]);
            cout<<b[p+pos];
        }
        if(c.find(s[i])>=0 && c.find(s[i])<=10){
            ll p=c.find(s[i]);
            cout<<c[p+pos];
        }

    }
}
