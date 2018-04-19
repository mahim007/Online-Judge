#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 100009

struct data{
    ll prop=0,sum=0;
} tree[3*N];

void update(ll node,ll b,ll e,ll i,ll j,ll x){
    if(b>j || e<i) return;
    if(b>=i && e<=j){
        tree[node].sum+=(e-b+1)*x;
        tree[node].prop+=x;
        return;
    }

    ll Left=node<<1;
    ll Right=Left+1;
    ll mid=(b+e)>>1;
    update(Left,b,mid,i,j,x);
    update(Right,mid+1,e,i,j,x);
    tree[node].sum=tree[Left].sum+tree[Right].sum+(e-b+1)*tree[node].prop;
}

ll query(ll node,ll b,ll e,ll i,ll j,ll carry=0){
    if(b>j || e<i) return 0;
    if(b>=i && e<=j) return tree[node].sum+(e-b+1)*carry;
    ll Left=node<<1;
    ll Right=Left+1;
    ll mid=(b+e)>>1;
    ll p1=query(Left,b,mid,i,j,carry+tree[node].prop);
    ll p2=query(Right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}

int main(){
    ll T,t,i,j,k,n,q;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        for(k=1;k<=q;k++){
            ll d;
            scanf("%lld",&d);
            if(d==0){
                ll x,y,z;
                scanf("%lld %lld %lld",&x,&y,&z);
                update(1,1,n,x,y,z);
            }
            else{
                ll x,y;
                scanf("%lld %lld",&x,&y);
                printf("%lld\n",query(1,1,n,x,y,0));
            }
        }

        for(i=1;i<3*N;i++) tree[i].prop=tree[i].sum=0;
    }

    return 0;
}
