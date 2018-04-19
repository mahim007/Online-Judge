#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 30009

char s[mxn];

struct data{
    ll st,ed;
} tree[4*mxn];

void build(ll node,ll l,ll r){
    if(l==r){
        if(s[l]=='('){
            tree[node].st=1;
            tree[node].ed=0;
        }
        else{
            tree[node].st=0;
            tree[node].ed=1;
        }

        return;
    }

    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    build(L,l,mid);
    build(R,mid+1,r);
    tree[node].st=max(tree[L].st-tree[R].ed,0ll)+tree[R].st;
    tree[node].ed=max(tree[R].ed-tree[L].st,0ll)+tree[L].ed;
}

void update(ll node,ll l,ll r,ll x){
    if(l>x || r<x) return;
    if(l==x && r==x){
        tree[node].st=!tree[node].st;
        tree[node].ed=!tree[node].ed;
        return;
    }

    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    if(x<=mid) update(L,l,mid,x);
    else update(R,mid+1,r,x);
    tree[node].st=max(tree[L].st-tree[R].ed,0ll)+tree[R].st;
    tree[node].ed=max(tree[R].ed-tree[L].st,0ll)+tree[L].ed;
}

int main(){
    ll n,i,j,k,x,q,t=1;
    while(scanf("%lld",&n)==1){
        getchar();
        gets(s+1);
        build(1,1,n);

    scanf("%lld",&q);
    printf("Test %lld:\n",t);
    t++;
    for(k=1;k<=q;k++){
        scanf("%lld",&x);
        if(x==0){
            if(tree[1].st==0 && tree[1].ed==0) printf("YES\n");
            else printf("NO\n");
        }
        else{
            update(1,1,n,x);
        }
    }

    }

    return 0;
}
