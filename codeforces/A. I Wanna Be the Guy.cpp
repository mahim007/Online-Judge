#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;

int main(){
    ll n,ans=0;
    cin>>n;
    ll d,k,i;
    cin>>d;
    for(i=1;i<=d;i++){
        cin>>k;
        if(M[k]==0){
            ans++;
            M[k]=1;
        }
    }

    cin>>d;
    for(i=1;i<=d;i++){
        cin>>k;
        if(M[k]==0){
            ans++;
            M[k]=1;
        }
    }

    if(ans==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";

    return 0;
}
