#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll V[1009];
int main(){
    ll n,i,cnt=0,j,mx=0;
    cin>>n;
    for(i=1;i<=n;i++){
        ll x;
        cin>>x;
        V[x]++;
    }

    cnt=mx=0;
    for(i=1;i<=1000;i++){
        if(V[i]>mx) mx=V[i];
    }

    cout<<n-mx<<endl;
    return 0;
}
