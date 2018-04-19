#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define mxn 100009
ll a[mxn],b[mxn];
ll tree[4*mxn];

void update(ll idx,ll l,ll r,ll x,ll y){
    if(l>x || r<x) return;
    if(l==x && r==x){
        tree[idx]+=y;
        tree[idx]%=mod;
        return;
    }

    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;

    update(L,l,mid,x,y);
    update(R,mid+1,r,x,y);

    tree[idx]=(tree[L]+tree[R])%mod;
}

ll query(ll idx,ll l,ll r,ll x,ll y){
    if(l>y || r<x) return 0;
    if(l>=x && r<=y) return tree[idx];

    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;

    ll p1=query(L,l,mid,x,y);
    ll p2=query(R,mid+1,r,x,y);

    return (p1+p2)%mod;
}

int main(){
    ll t,T,i,n,sum,j;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            b[i]=a[i];
        }

        sort(b+1,b+n+1);
        memset(tree,0,sizeof tree);
        for(i=1;i<=n;i++){
            ll val=a[i];
            ll pos=lower_bound(b+1,b+1+n,val)-b; //cout<<pos<<"\n";
            if(pos==1){
                update(1,1,n,1,1);
            }
            else{
                ll res=query(1,1,n,1,pos-1)+1;
                res%=mod;
                update(1,1,n,pos,res);
            }
        }

        printf("Case %lld: %lld\n",t,tree[1]);
    }
    return 0;
}
