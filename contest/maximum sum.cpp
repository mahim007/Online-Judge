#include<bits/stdc++.h>
using namespace std;
#define mx 100009
#define ll long long int
ll arr[mx];
//ll tree[mx*4];
//ll state=0;
struct nd{
    ll high;
    ll sum;
};
nd tree[mx*4];
ll ans=-1;
ll res;
void init(ll node,ll l,ll r){
    if(l==r){
        tree[node].high=arr[l]; //cout<<"lf node:"<<node<<" val:"<<tree[node].high<<endl;
        tree[node].sum=arr[l];
        return;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    init(Left,l,mid);
    init(Right,mid+1,r);
    tree[node].high=max(tree[Left].high,tree[Right].high);
    ll hh=-1;
    hh=max(hh,tree[Left].high+tree[Right].high);
    hh=max(hh,tree[Left].sum);
    hh=max(hh,tree[Right].sum);
    tree[node].sum=hh; //cout<<"node:"<<node<<" val:"<<tree[node].sum<<" high:"<<tree[node].high<<endl;
}

ll query(ll node,ll l,ll r,ll i,ll j){
    if(l>j || r<i){
        return 0;
    }
    if(l>=i && r<=j){//cout<<"node:"<<node<<" val:"<<tree[node].sum<<endl;  cout<<"l:"<<l<<" r:"<<r<<endl;
        if(tree[node].sum>res){
            res=tree[node].sum;
        }
        return tree[node].high;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    ll p1=query(Left,l,mid,i,j);
    ll p2=query(Right,mid+1,r,i,j);
    if(p1+p2>res){ //cout<<p1<<"+"<<p2<<endl;
        res=p1+p2;
    }
    return max(p1,p2);
}

void update(ll node,ll l,ll r,ll pos,ll val){
    if(l>pos || r<pos){
        return;
    }
    if(l==r){
        tree[node].high=val;
        tree[node].sum=val;
        return;
    }
    ll Left=node*2;
    ll Right=node*2+1;
    ll mid=(l+r)/2;
    update(Left,l,mid,pos,val);
    update(Right,mid+1,r,pos,val);
    tree[node].high=max(tree[Left].high,tree[Right].high);
    tree[node].sum=max(max(tree[Left].sum,tree[Right].sum),tree[Left].high+tree[Right].high);
}

int main(){
    ll n,i,j;
    while(scanf("%lld",&n)==1){
        for(i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
        }
        init(1,1,n);
        char ch;
        ll q;
        scanf("%lld",&q);
        getchar();
        for(i=1;i<=q;i++){
            scanf("%c",&ch);
            if(ch=='Q'){
                ll x,y; //cout<<"Q pressed"<<endl;
                scanf("%lld %lld",&x,&y);
                query(1,1,n,x,y);
                printf("%lld\n",res);
                res=-1;
                //state=0;
            }
            else{
                ll x,y;
                scanf("%lld %lld",&x,&y);
                update(1,1,n,x,y);
            }
            getchar();
        }
    }
    return 0;
}
