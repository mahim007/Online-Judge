#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll p[mxn];
vector<ll>V;

ll call(ll d){
    if(d==1) return 0;
    if(d==2) return 1;
    if(d%2==0) return 0;
    for(ll i=3;i*i<=d;i++){
        if(d%i==0) return 0;
    }

    return 1;
}

int main(){
    p[0]=p[1]=1;
    for(ll i=4;i<mxn;i=i+2) p[i]=1;
    for(ll i=3;i*i<mxn;i++){
        if(p[i]==0){
            for(ll j=i*i;j<mxn;j=j+i+i){
                p[j]=1;
            }
        }
    }

    for(ll i=0;i<mxn;i++){
        if(p[i]==0){
            V.push_back(i);
        }
    }

    ll n;
    cin>>n;
    ll sz=V.size();
    for(ll i=0;i<sz;i++){
        ll d=n-V[i];
        if(call(d)==1){
            cout<<2<<"\n";
            return 0;
        }
    }

    cout<<3<<"\n";
    return 0;
}
