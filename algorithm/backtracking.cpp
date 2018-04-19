#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
ll n,k,p;
ll used[16];
ll mx,cnt;
void call(ll l){
    if(V.size()==k){
        for(ll i=0;i<k;i++) cout<<V[i];
        cout<<"\n";
        p++;
        return;
    }

    for(ll i=l+1;i<=n-k+V.size()+1;i++){
        if(used[i]==0){
            used[i]=1;
            V.push_back(i);
            call(i);
            used[i]=0;
            V.pop_back();

        }
    }
}

int main(){
    cin>>n>>k;
    call(0);
    cout<<p<<"\n";
    return 0;
}
