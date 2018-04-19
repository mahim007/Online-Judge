#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
#define lim 9000000000000000000
ll a[mxn],upd[mxn];
ll n,m,w;

ll call(ll val,ll lft){
    ll i;
    for(i=0;i<n;i++){
        upd[i]=0;
    }

    for(i=0;i<n;i++){
        if(i) upd[i]+=upd[i-1];
        ll baki=val-a[i]-upd[i];
        if(baki>0){
            lft-=baki;
            upd[i]+=baki;
            if(i+w<n)
            upd[i+w]-=baki;
        }

        if(lft<0) return 0;
    }

    return 1;
}

int main(){
    ll i,j,k,ans=0;
    scanf("%lld %lld %lld",&n,&m,&w);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }


    ll l=0;
    ll h=lim;
    while(l<=h){
        ll mid=(l+h)/2;
        if(call(mid,m)){
            if(mid>ans) ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }

    printf("%lld\n",ans);
    return 0;
}
