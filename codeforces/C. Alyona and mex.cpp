#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll a[mxn];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,m,i,j,sz,xx,yy;
    cin>>n>>m;
    sz=(ll)1e15;
    for(i=1;i<=m;i++){
        ll x,y;
        cin>>x>>y;
        if((y-x+1)<sz){
            sz=y-x+1;
            yy=y;
            xx=x;
        }
    }

    ll ans=sz;
//    ll k=0;
//    for(i=xx;i<=yy;i++){
//        a[i]=k;
//        k++;
//    }
//
//    for(i=1;i<=n;i++){
//        if(a[i]==0){
//            a[i]=k;
//            k++;
//        }
//    }

    cout<<ans<<"\n";
    for(i=1;i<=n;i++) cout<<i%ans<<" ";
    cout<<"\n";
    return 0;
}
