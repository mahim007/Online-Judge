#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mxn 100009

ll ar[mxn];

int main(){
    ll n;
    ll i,j,k;
    ll cur,mx;

    cin>>n;
    for(i=1;i<=n;i++) cin>>ar[i];
    cur=mx=ar[1];

    for(i=2;i<=n;i++){
        cur+=ar[i];
        cur=max(cur,ar[i]);
        mx=max(mx,cur);
    }

    cout<<mx<<"\n";
    return 0;
}
