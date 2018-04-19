#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,d,t,T,s;
    cin>>T;
    for(t=1;t<=T;t++){
        s=0;
        cin>>n;
        for(ll i=1;i<=n;i++){
            cin>>d;
            s+=d;
        }

        printf("Case %lld: %lld\n",t,s/n);
    }
    return 0;
}
