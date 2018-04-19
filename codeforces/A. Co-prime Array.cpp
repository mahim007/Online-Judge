#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V,P;

ll generatenumber(ll x,ll y){
    if(y<x) swap(x,y);
    for(ll i=1;i<=1000000000;i++){
        if(__gcd(x,i)==1 && __gcd(i,y)==1)
            return i;
    }
    return 0;
}

int main(){
    ll i,j,k=0,n;
    cin>>n;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        V.push_back(d);
    }

    for(i=1;i<n;i++){
        ll flag=__gcd(V[i],V[i-1]);
        if(flag!=1){
            ll d=generatenumber(V[i],V[i-1]);
            P.push_back(V[i-1]);
            P.push_back(d);
            k++;
        }
        else{
            P.push_back(V[i-1]);
        }

    }
    P.push_back(V[n-1]);

    //sort(V.begin(),V.end());
    cout<<k<<endl;
    for(i=0;i<P.size();i++) cout<<P[i]<<" ";
    cout<<endl;
    return 0;
}
