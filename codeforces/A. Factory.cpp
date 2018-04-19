#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
int main(){
    ll n,m,d,f=0;
    cin>>n>>m;
    while(1){
        d=n%m;
        if(d==0) break;
        M[d]++;
        if(M[d]>1){
            f=1;
            break;
        }
        n=n+d;
    }

    if(f==0) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}
