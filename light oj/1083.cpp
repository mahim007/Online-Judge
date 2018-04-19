#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 30009
ll arr[maax];
ll ans;
struct data
{
    int mn;
    ll area;
    //bool flag;
};
data tree[maax*50];
void init(ll node,ll l,ll r)
{
    if(l==r)
    {
        tree[node].mn=tree[node].area=arr[l]; //cout<<"l:"<<l<<"  tree["<<node<<"]:"<<tree[node]<<endl;
        return;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    //ll mid=(l+r)/2;
    init(Left,l,r-1);
    init(Right,l+1,r);
    //tree[node].mx=max(tree[Left].mx,tree[Right].mx); //cout<<"tree["<<node<<"]:"<<tree[node]<<endl;
    tree[node].mn=min(tree[Left].mn,tree[Right].mn);
    ll a,b,c,m;
    a=tree[node].mn*(r-l+1);
    b=tree[Left].area;
    m=max(a,b);
    c=tree[Right].area;
    m=max(m,c);
    tree[node].area=m;
    if(tree[node].area>ans)
        ans=tree[node].area;
}

int main()
{
    ll T,t,n,i,j,other;
    scl(T);
    rep(t,T)
    {
        other=0;
        scl(n);
        rep(i,n)
        {
            scl(arr[i]);
            if(arr[i]>other)
                other=arr[i];
        } //rep(j,n) pf("%lld ",arr[j]); pf("\n");
        ans=0;
        init(1,1,n);//rep(j,n*3) pf("%lld ",tree[j]); pf("\n");
        pf("Case %lld: ",t);
        if(ans!=0)
            pfl(ans);
        else
            pf("%lld",other);
        pf("\n");
        mem(tree,0);
        mem(arr,0);
    }
    return 0;
}







