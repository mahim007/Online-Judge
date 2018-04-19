#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;

int main(){
    ios_base::sync_with_stdio(0);

    ll n,k,i,j,l,r;
    cin>>n>>k;
    V.push_back(1);
    r=n;
    l=2;
    for(i=1;i<k;i++){
        if(i&1){
            V.push_back(r);
            r--;
        }
        else{
            V.push_back(l);
            l++;
        }
    }

    ll d=V[V.size()-1];
    if(k&1){
        for(i=d+1;;i++){
            V.push_back(i);
            if(V.size()==n) break;
        }
    }
    else{
        for(i=d-1;;i--){
            V.push_back(i);
            if(V.size()==n) break;
        }
    }

    for(i=0;i<n;i++) cout<<V[i]<<" ";
    cout<<"\n";
    return 0;
}
