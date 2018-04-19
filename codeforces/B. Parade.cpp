#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll a[mxn][3];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,i,j,k,indx=0,mx=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i][1]>>a[i][2];
    ll l=0,r=0;
    for(i=1;i<=n;i++){
        l+=a[i][1];
        r+=a[i][2];
    }

    mx=max(mx,abs(l-r));
    for(i=1;i<=n;i++){
        if(abs((l-a[i][1]+a[i][2])-(r-a[i][2]+a[i][1]))> mx){
            mx=abs((l-a[i][1]+a[i][2])-(r-a[i][2]+a[i][1]));
            indx=i;
        }
    }

    cout<<indx<<"\n";
    return 0;
}
