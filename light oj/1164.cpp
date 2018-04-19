#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    ll sum=0,prop=0;
}tree[100009*4];

void init(ll node,ll l,ll r){
    if(l==r){
        tree[node].prop=0;
        tree[node].sum=0;
        return;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    init(Left,l,mid);
    init(Right,mid+1,r);
    tree[node].sum=0;
    tree[node].prop=0;
}

void update(ll node,ll l,ll r,ll i,ll j,ll val){ //cout<<"update called.\n";
    if(l>j || r<i){
        return;
    }
    if(l>=i && r<=j){
        tree[node].prop+=val;
        tree[node].sum+=(r-l+1)*val;
        return;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    update(Left,l,mid,i,j,val);
    update(Right,mid+1,r,i,j,val);
    tree[node].sum=tree[Left].sum+tree[Right].sum+(r-l+1)*tree[node].prop;
}

ll query(ll node,ll l,ll r,ll i,ll j,ll carry=0){ //cout<<"query called.\n";
    if(l>j || r<i){
        return 0;
    }
    if(l>=i && r<=j){
        return tree[node].sum+carry*(r-l+1);
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    ll p=query(Left,l,mid,i,j,tree[node].prop+carry);
    ll q=query(Right,mid+1,r,i,j,tree[node].prop+carry);
    return p+q;
}

int main(){
    ll T,t,i,n,q,x,y,v,p;
    scanf("%lld",&T); //for(i=0;i<10;i++){cout<<tree[i].prop<<" "<<tree[i].sum<<endl;}
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        init(1,1,n);
        printf("Case %lld:\n",t);
        for(i=1;i<=q;i++){
            scanf("%lld",&p);
            if(p==0){
                scanf("%lld %lld %lld",&x,&y,&v);
                update(1,1,n,x+1,y+1,v);
            }
            else{
                scanf("%lld %lld",&x,&y);
                printf("%lld\n",query(1,1,n,x+1,y+1,0));
            }
        }
    }
    return 0;
}
