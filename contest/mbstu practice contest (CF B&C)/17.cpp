#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll a[mxn],b[mxn];

int main(){
    ios_base::sync_with_stdio(0);
    ll n,i,j,k,l,r,m;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b+1,b+1+n);
    for(i=1;i<=n;i++){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }

    cin>>m;
    for(k=1;k<=m;k++){
        ll t;
        cin>>t>>l>>r;
        if(t==1){
            cout<<a[r]-a[l-1]<<"\n";
        }
        else{
            cout<<b[r]-b[l-1]<<"\n";
        }
    }

    return 0;
}
