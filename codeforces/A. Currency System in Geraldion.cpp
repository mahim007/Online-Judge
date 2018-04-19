#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;

int main(){
    ll n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        M[d]=1;
    }
    if(M[1]) cout<<-1<<endl;
    else cout<<1<<endl;
    return 0;
}
