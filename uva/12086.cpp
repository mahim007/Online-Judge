#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 200009
ll arr[lim];
ll tree[lim*3];

void init(ll node,ll b,ll e){
    if(b==e){
        tree[node]=arr[b];
        return;
    }

    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=tree[Left]+tree[Right];
}

void update(ll node,ll b,ll e,ll i,ll x){
    if(b>i || e<i) return;
    if(b>=i && e<=i){
        tree[node]=x;
        return;
    }

    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(b+e)/2;
    update(Left,b,mid,i,x);
    update(Right,mid+1,e,i,x);
    tree[node]=tree[Left]+tree[Right];
}

ll query(ll node,ll b,ll e,ll i,ll j){
    if(b>j || e<i) return 0;
    if(b>=i && e<=j) return tree[node];
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(b+e)/2;
    ll p1=query(Left,b,mid,i,j);
    ll p2=query(Right,mid+1,e,i,j);
    return p1+p2;
}

int main(){
    ll i,j,k,n,m,d,x,t=1;
    while(scanf("%lld",&n)==1){
        if(n==0) break;
        for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
        init(1,1,n);
        if(t>1) printf("\n");
        printf("Case %lld:\n",t);
        while(1){
            string s;
            cin>>s;
            if(s=="END") break;
            if(s=="M"){
                scanf("%lld %lld",&d,&x);
                ll ans=query(1,1,n,d,x);
                printf("%lld\n",ans);
            }
            else{
                scanf("%lld %lld",&d,&x);
                update(1,1,n,d,x);
            }
        }

        t++;
    }

    return 0;
}
