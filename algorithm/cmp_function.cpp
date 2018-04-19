#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;

bool cmp(ll a,ll b){
    return a>b;
}

int main(){
    ll n,i,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        V.push_back(d);
    }

    sort(V.begin(),V.end(),cmp);
    cout<<"after sorting...\n";
    for(i=0;i<n;i++) cout<<V[i]<<" ";
    cout<<"\n";
    return 0;
}
