#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 509
#define inf 1e15
ll mn,mx;
ll a[mxn*mxn];

struct data{
    ll mina,maxa;
} tree[4*mxn*mxn];

ll lazy[4*mxn*mxn];

void build(ll node,ll l,ll r){
    if(l==r){
        tree[node].mina=a[l];
        tree[node].maxa=a[l];
        return;
    }

    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    build(L,l,mid);
    build(R,mid+1,r);
    tree[node].maxa=max(tree[L].maxa,tree[R].maxa);
    tree[node].mina=min(tree[L].mina,tree[R].mina);
}

void update(ll node,ll l,ll r,ll x,ll y){
    if(l==x && r==x){
        tree[node].maxa=y;
        tree[node].mina=y;
        return;
    }

    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    if(x<=mid) update(L,l,mid,x,y);
    else update(R,mid+1,r,x,y);
    tree[node].maxa=max(tree[L].maxa,tree[R].maxa);
    tree[node].mina=min(tree[L].mina,tree[R].mina);
}

void query(ll node,ll l,ll r,ll x,ll y){
    if(l>y || r<x) return;
    if(l>=x && r<=y){
        mx=max(mx,tree[node].maxa);
        mn=min(mn,tree[node].mina);
        return;
    }

    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    query(L,l,mid,x,y);
    query(R,mid+1,r,x,y);
}

int main(){
    ll n,i,j,k,x,y,q,z,x1,y1;
    scanf("%lld",&n);
    for(i=1;i<=n*n;i++){
        scanf("%lld",&a[i]);
    }

    build(1,1,n*n);
    scanf("%lld",&q);
    getchar();
    for(k=1;k<=q;k++){
        char ch;
        scanf("%c",&ch);
        if(ch=='q'){
            mn=inf;
            mx=-inf;
            scanf("%lld %lld %lld %lld",&x,&y,&x1,&y1);
            getchar();
            while(x<=x1){
                ll st,ed;
                st=((x-1)*n)+y;
                ed=((x-1)*n)+y1;
                query(1,1,n*n,st,ed);
                x++;
            }

            printf("%lld %lld\n",mx,mn);
        }
        else{
            scanf("%lld %lld %lld",&x,&y,&z);
            getchar();
            x=((x-1)*n)+y;
            update(1,1,n*n,x,z);
        }
    }

    return 0;
}
