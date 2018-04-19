#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 50009
#define inf 999999999999999

ll a[mxn];
struct data{
    ll total;
    ll prefix;
    ll suffix;
    ll mid;
    ll mx;
};
data tree[4*mxn];

void build(ll node,ll l,ll r){
    if(l==r){
        tree[node].total=tree[node].prefix=tree[node].suffix=tree[node].mid=tree[node].mx=a[l];
        return;
    }

    ll m=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    build(L,l,m);
    build(R,m+1,r);
    tree[node].total=tree[L].total+tree[R].total;
    tree[node].prefix=max(tree[L].prefix,tree[L].total+tree[R].prefix);
    tree[node].suffix=max(tree[R].suffix,tree[R].total+tree[L].suffix);
    //tree[node].mid=max(tree[L].suffix,max(tree[R].prefix,tree[L].suffix+tree[R].prefix));
    tree[node].mx=max(tree[node].total,max(tree[L].total,max(tree[R].total,max(tree[node].prefix,max(tree[node].suffix,max(tree[L].mx,max(tree[R].mx,max(tree[L].suffix,max(tree[R].prefix,tree[L].suffix+tree[R].prefix)))))))));
    //cout<<node<<" "<<tree[node].mx<<"\n";
}

void update(ll node,ll l,ll r,ll x,ll y){
    if(l>x || r<x) return;
    if(l==x && r==x){
        tree[node].total=tree[node].prefix=tree[node].suffix=tree[node].mid=tree[node].mx=y;
        return;
    }

    ll m=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    update(L,l,m,x,y);
    update(R,m+1,r,x,y);
    tree[node].total=tree[L].total+tree[R].total;
    tree[node].prefix=max(tree[L].prefix,tree[L].total+tree[R].prefix);
    tree[node].suffix=max(tree[R].suffix,tree[R].total+tree[L].suffix);
    //tree[node].mid=max(tree[L].suffix,max(tree[R].prefix,tree[L].suffix+tree[R].prefix));
    tree[node].mx=max(tree[node].total,max(tree[L].total,max(tree[R].total,max(tree[node].prefix,max(tree[node].suffix,max(tree[L].mx,max(tree[R].mx,max(tree[L].suffix,max(tree[R].prefix,tree[L].suffix+tree[R].prefix)))))))));
    //cout<<node<<" "<<tree[node].mx<<"\n";
}

data query(ll node,ll l,ll r,ll x,ll y){
    data D;
    D.mx=D.mid=D.prefix=D.suffix=D.total=-inf;
    if(l>y || r<x) return D;
    if(l>=x && r<=y) return tree[node];
    ll m=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    data p1=query(L,l,m,x,y);
    data p2=query(R,m+1,r,x,y);
    data res;
    res.total=p1.total+p2.total;
    res.prefix=max(p1.prefix,p1.total+p2.prefix);
    res.suffix=max(p2.suffix,p2.total+p1.suffix);
    res.mid=max(p1.suffix,max(p2.prefix,p1.suffix+p2.prefix));
    res.mx=max(res.total,max(p1.total,max(p2.total,max(res.prefix,max(res.suffix,max(p1.mx,max(p2.mx,res.mid)))))));
    return res;
}

int main(){
    ll n,i,j,k,q,x,y,m;
    scanf("%lld",&n);
        for(i=1;i<=n;i++) scanf("%lld",&a[i]);
        build(1,1,n);
        scanf("%lld",&q);
        for(k=1;k<=q;k++){
            scanf("%lld %lld %lld",&m,&x,&y);
            if(m==1){
                data ans=query(1,1,n,x,y);
                printf("%lld\n",ans.mx);
            }
            else{
                update(1,1,n,x,y);
            }
        }

    return 0;
}
