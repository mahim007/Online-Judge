#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
ll arr[lim];
ll tree[lim*3];

void init(ll node,ll b,ll e){
    if(b==e){
        ll x;
        if(arr[b]==0) x=0;
        else if(arr[b]>0) x=1;
        else x=-1;
        tree[node]=x;
        return;
    }

    ll Left=node<<1;
    ll Right=(node<<1)+1;
    ll mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=tree[Left]*tree[Right];
}

void update(ll node,ll b,ll e,ll i,ll x){
    if(b>i || e<i) return;
    if(b>=i && e<=i){
        ll p;
        if(x==0) p=0;
        else if(x>0) p=1;
        else p=-1;
        tree[node]=p;
        return;
    }

    ll Left=node<<1;
    ll Right=(node<<1)+1;
    ll mid=(b+e)>>1;
    update(Left,b,mid,i,x);
    update(Right,mid+1,e,i,x);
    tree[node]=tree[Right]*tree[Left];
}

ll query(ll node,ll b,ll e,ll i,ll j){
    if(b>j || e<i) return 1;
    if(b>=i && e<=j) return tree[node];
    ll Left=node<<1;
    ll Right=(node<<1)+1;
    ll mid=(b+e)/2;
    ll p1=query(Left,b,mid,i,j);
    ll p2=query(Right,mid+1,e,i,j);
    return p1*p2;
}

int main(){ //freopen("12532output","w",stdout);
    ll n,k,i,j,x,d;
    while(scanf("%lld %lld",&n,&k)==2){
        for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
        //memset(tree,0,sizeof tree);
        init(1,1,n);
        for(ll q=1;q<=k;q++){
            char ch;
            getchar();
            scanf("%c",&ch);
            if(ch=='C'){
                ll p;
                scanf("%lld %lld",&p,&x);
                update(1,1,n,p,x);
            }
            else{
                ll m,h;
                scanf("%lld %lld",&m,&h);
                ll ans=query(1,1,n,m,h); //cout<<"value:"<<ans<<endl;
                if(ans==0) printf("0");
                else if(ans<0) printf("-");
                else printf("+"); //cout<<endl;
            }
        }

        printf("\n");
    }

    return 0;
}
