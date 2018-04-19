#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
vector<ll>V;

int main(){
    ll n,i,j,k;
    cin>>n;
    ll ans=0;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            ll k=0;
            while(n%i==0){
                k++;
                n=n/i;
            }

            V.push_back(k);
        }
    }

    if(n!=1) V.push_back(1);
    for(i=0;i<V.size();i++){
        ans+=V[i]/2;
        if(V[i]%2==1)ans++;
    }
    cout<<ans<<"\n";
    return 0;
}
