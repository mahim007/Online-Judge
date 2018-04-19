#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;

void solve(char ch,ll k){
    ll sz=s.size();
    for(ll i=0;i<sz && k;i++){
        if(s[i]!=ch){
            s[i]=ch;
            k--;
        }
    }
}

int main(){
    ll n,i,m,stand=0,sit=0;
    cin>>n;
    cin>>s;
    m=n/2;
    for(i=0;i<n;i++){
        if(s[i]=='x') sit++;
        else stand++;
    } //cout<<"stnd:"<<stand<<" sit:"<<sit<<"\n";

    if(stand==sit){
        cout<<0<<"\n";
        cout<<s<<"\n";
    }
    else{
        ll k=abs(stand-sit)/2;
        if(stand<sit) solve('X',k);
        else solve('x',k);
        cout<<k<<"\n";
        cout<<s<<"\n";
    }

    return 0;
}
