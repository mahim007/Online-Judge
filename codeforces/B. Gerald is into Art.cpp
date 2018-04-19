#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll x,y,a,b,m,n;
    cin>>x>>y>>a>>b>>m>>n;
    if((a+m)<=x &&(max(b,n))<=y){
        cout<<"YES\n";
    }
    else if((a+n)<=x &&(max(b,m))<=y){
        cout<<"YES\n";
    }
    else if((b+m)<=x && (max(a,n))<=y){
        cout<<"YES\n";
    }
    else if((b+n)<=x && (max(a,m))<=y){
        cout<<"YES\n";
    }
    else if((a+m)<=y &&(max(b,n))<=x){
        cout<<"YES\n";
    }
    else if((a+n)<=y &&(max(b,m))<=x){
        cout<<"YES\n";
    }
    else if((b+m)<=y && (max(a,n))<=x){
        cout<<"YES\n";
    }
    else if((b+n)<=y && (max(a,m))<=x){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

    return 0;
}
