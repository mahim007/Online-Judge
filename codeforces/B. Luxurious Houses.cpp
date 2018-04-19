#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100001
ll arr[mx];
ll tree[4*mx];
ll n;

void init(ll node,ll st,ll ed){
    if(st==ed){
        tree[node]=arr[st];
        return;
    }

    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(st+ed)/2;
    init(Left,st,mid);
    init(Right,mid+1,ed);
    tree[node]=max(tree[Left],tree[Right]);
}

ll query(ll node,ll st,ll ed,ll i,ll j){
    if(st>j || ed<i) return 0;
    if(st>=i && ed<=j) return tree[node];
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(st+ed)/2;
    ll p1=query(Left,st,mid,i,j);
    ll p2=query(Right,mid+1,ed,i,j);
    return max(p1,p2);
}

int main(){
    ll i;
    while(scanf("%lld",&n)==1){
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
        }

        init(1,1,n);
        for(i=1;i<n;i++){
            ll ans=query(1,1,n,i+1,n);
            if(ans<arr[i])
                printf("0 ");
            else
                printf("%lld ",ans-arr[i]+1);
        }
        printf("0\n");
    }
    return 0;
}
