#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll arr[mxn];
struct data{
    ll val,p;
} tree[4*mxn];

void init(ll idx,ll l,ll r){
    if(l==r){
        tree[idx].val=arr[l];
        tree[idx].p=l;
        return;
    }

    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;
    init(L,l,mid);
    init(R,mid+1,r);
    tree[idx].val=max(tree[L].val,tree[R].val);
    tree[idx].p= (tree[L].val>tree[R].val) ? tree[L].p : tree[R].p;
}

void update(ll idx,ll l,ll r,ll x,ll y){
    if(l==r && l==x){
        tree[idx].val=y;
        return;
    }

    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;
    if(x<=mid) update(L,l,mid,x,y);
    else update(R,mid+1,r,x,y);
    tree[idx].val=max(tree[L].val,tree[R].val);
    tree[idx].p=(tree[L].val>tree[R].val) ? tree[L].p : tree[R].p;
}

ll query(ll idx,ll l,ll r,ll x,ll y){
    if(l>=x && r<=y){
        return tree[idx].p;
    }
    if(r<x || l>y){
        return 0;
    }
    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;
    ll p1=query(L,l,mid,x,y);
    ll p2=query(R,mid+1,r,x,y);
    if(arr[p1]>arr[p2]) return p1;
    else return p2;
}

int main(){
    ll n,i,j,k,x,y,q;
    while(scanf("%lld",&n)==1){
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
        }

        arr[0]=-1;
        init(1,1,n);
        scanf("%lld",&q);
        for(k=1;k<=q;k++){
            char c;
            cin>>c;
            if(c=='U'){
                scanf("%lld %lld",&x,&y);
                arr[x]=y;
                update(1,1,n,x,y);
            }

            else{
                scanf("%lld %lld",&x,&y);
                ll a,b,c;
                a=query(1,1,n,x,y);
                b=query(1,1,n,x,a-1);
                c=query(1,1,n,a+1,y);

                cout<<max(arr[a]+arr[b],arr[a]+arr[c])<<"\n";
            }
        }
    }

    return 0;
}
