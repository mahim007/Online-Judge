#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
int main(){
    ll n,i,d;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>d;
        V.push_back(d);
    }

    cout<<"before sorting....\n";
    for(i=0;i<n;i++) cout<<V[i]<<" ";
    cout<<"\n";

    sort(V.begin(),V.end(),greater<ll>());
    cout<<"after sorting....\n";
    for(i=0;i<n;i++) cout<<V[i]<<" ";
    cout<<"\n";

    return 0;
}
