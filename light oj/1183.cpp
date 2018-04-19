#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll arr[mxn];
ll tree[4*mxn],lazy[4*mxn];

void update(ll idx,ll l,ll r,ll x,ll y,ll z) {
    if(lazy[idx]!=-1) {
        tree[idx]=(r-l+1)*lazy[idx];
        if(l!=r) {
            lazy[idx*2]=lazy[idx];
            lazy[(idx*2)+1]=lazy[idx];
        }

        lazy[idx]=-1;
    }

    if(l>y || r<x) return;
    if(l>=x && r<=y) {
        tree[idx]=(r-l+1)*z;
        if(l!=r) {
            lazy[idx*2]=z;
            lazy[(idx*2)+1]=z;
        }

        return;
    }

    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;

    update(L,l,mid,x,y,z);
    update(R,mid+1,r,x,y,z);

    tree[idx]=tree[L]+tree[R];
}

ll query(ll idx,ll l,ll r,ll x,ll y){
    if(l>y || r<x) return 0;
    if(lazy[idx]!=-1){
        tree[idx]=(r-l+1)*lazy[idx];
        if(l!=r){
            lazy[idx*2]=lazy[idx];
            lazy[(idx*2)+1]=lazy[idx];
        }

        lazy[idx]=-1;
    }

    if(l>=x && r<=y) return tree[idx];
    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;

    ll p1=query(L,l,mid,x,y);
    ll p2=query(R,mid+1,r,x,y);

    return p1+p2;
}

int main() {
    ll t,T,i,j,k,q,x,y,d,z,n;
    scanf("%lld",&T);
    for(t=1; t<=T; t++) {
        scanf("%lld %lld",&n,&q);
        memset(tree,0,sizeof tree);
        memset(lazy,-1,sizeof lazy);
        printf("Case %lld:\n",t);
        for(k=1; k<=q; k++) {
            scanf("%lld",&d);
            if(d==1) {
                scanf("%lld %lld %lld",&x,&y,&z);
                update(1,1,n,x+1,y+1,z);
            } else {
                scanf("%lld %lld",&x,&y);
                ll ans=query(1,1,n,x+1,y+1);
                z=(y-x+1);
                if(ans%z==0){
                    printf("%lld\n",ans/z);
                }
                else{
                    ll gcd=__gcd(ans,z);
                    ans/=gcd;
                    z/=gcd;
                    printf("%lld/%lld\n",ans,z);
                }
            }
        }
    }

    return 0;
}
