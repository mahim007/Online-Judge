#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
ll arr[lim];
map<ll,ll>M;
struct D{
    ll x;
}tree[3*lim];

void init(ll node,ll b,ll e){
    if(b==e){
        tree[node].x=M[arr[b]];
        return;
    }

    ll Left=node*2;
    ll Right=Left+1;
    ll mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node].x=max(tree[Left].x,tree[Right].x);
}

ll query(ll node,ll b,ll e,ll i,ll j){
    if(b>j || e<i) return -1;
    if(b>=i && e<=j){
        return tree[node].x;
    }

    ll Left=node*2;
    ll Right=Left+1;
    ll mid=(b+e)/2;
    ll p1=query(Left,b,mid,i,j);
    ll p2=query(Right,mid+1,e,i,j);
    return max(p1,p2);
}

int main(){
    ll n,q,i,j,k,mx;
    while(scanf("%lld",&n)==1){
        if(n==0) break;
        scanf("%lld",&q);
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
            M[arr[i]]++;
        }

        init(1,1,n);
        for(k=1;k<=q;k++){
            //ans.clear();
            ll x,y;
            scanf("%lld %lld",&x,&y);
            if(arr[x]==arr[y]){
                printf("%lld\n",y-x+1);
                continue;
            }

            ll v1=1;
            x++;
            for(;x<=y;x++){
                if(arr[x]==arr[x-1]) v1++;
                else break;
            }

            ll v2=1;
            y--;
            for(;y>=x;y--){
                if(arr[y]==arr[y+1]) v2++;
                else break;
            }


            mx=max(v1,v2);
            if(x<y){
                ll m=query(1,1,n,x,y);
                mx=max(mx,m);
            }

            printf("%lld\n",mx);
            M.clear();
        }
    }

    return 0;
}
