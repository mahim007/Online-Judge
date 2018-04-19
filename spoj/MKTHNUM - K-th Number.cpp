#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 100009
ll arr[limit];

struct data{
    vector<ll>V;
} tree[limit*3];

void init(ll node,ll b, ll e){
    if(b==e){
        tree[node].V.push_back(arr[b]);
        return;
    }

    ll Left=node<<1;
    ll Right=Left+1;
    ll mid=(b+e)>>1;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node].V=tree[Left].V;
}

int main(){
    ll n,q,i,j,k;
    while(scanf("%lld %lld",&n,&q)==2){
        for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
        init(1,1,n);
    }
}
