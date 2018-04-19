#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 100009
ll arr[maax];
ll tree[maax*3];

void init(ll node,ll l,ll r)
{
    if(l==r)
    {
        tree[node]=arr[l];
        return;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    init(Left,l,mid);
    init(Right,mid+1,r);
    tree[node]=min(tree[Left],tree[Right]);
}
ll query(ll node,ll l,ll r,ll i,ll j)
{
    if(i>r || j<l) return 999999;
    if(l>=i && r<=j) return tree[node];
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    ll p1=query(Left,l,mid,i,j);
    ll p2=query(Right,mid+1,r,i,j);
    return min(p1,p2);
}
int main()
{
    ll T,t,n,q,i;
    scl(T);
    rep(t,T)
    {
        scl(n);
        scl(q);
        rep(i,n)
        scl(arr[i]);
        init(1,1,n);
        //for(i=1;i<=50;i++) printf("%lld ",tree[i]);
        printf("Case %lld:\n",t);
        rep(i,q)
        {
            ll u,v;
            scl(u);
            scl(v);
            pfl(query(1,1,n,u,v));
            printf("\n");
        }
        mem(tree,0);
        mem(arr,0);
    }
    return 0;
}
