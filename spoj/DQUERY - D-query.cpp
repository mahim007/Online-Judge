#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 30009
#define mxq 200009

struct data{
    ll st,ed,nmbr;
    bool operator < (const data& P) const{
        if(ed!=P.ed) return ed<P.ed;
        return st<P.st;
    }

};

data ques[mxq];
ll arr[mxn];
ll tree[4*mxn],ans[mxq];
map<ll,ll>M;

void update(ll node,ll l,ll r,ll pos,ll val){
    if(l>pos || r<pos) return;
    if(l==r && l==pos){
        tree[node]=val;
        return;
    }

    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    update(L,l,mid,pos,val);
    update(R,mid+1,r,pos,val);
    tree[node]=tree[L]+tree[R];
}

ll query(ll node,ll l,ll r,ll x,ll y){
    if(l>y || r<x) return 0ll;
    if(l>=x && r<=y) return tree[node];
    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    ll p1=query(L,l,mid,x,y);
    ll p2=query(R,mid+1,r,x,y);
    return p1+p2;
}

int main(){
    ll n,q,i,j,k,x,y;
    while(scanf("%lld",&n)==1){
        for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
        scanf("%lld",&q);
        for(i=1;i<=q;i++){
            scanf("%lld %lld",&x,&y);
            ques[i].st=x;
            ques[i].ed=y;
            ques[i].nmbr=i;
        }

        sort(ques+1,ques+1+q); //cout<<"query list.....\n"; for(i=1;i<=q;i++) cout<<ques[i].st<<" "<<ques[i].ed<<"\n";
        k=1;
        for(i=1;i<=q;i++){
            while(k<=ques[i].ed){
                if(M[arr[k]]==0){
                    update(1,1,n,k,1);
                    M[arr[k]]=k;
                }
                else{
                    update(1,1,n,M[arr[k]],0);
                    update(1,1,n,k,1);
                    M[arr[k]]=k;
                }

                k++;
            }

            ans[ques[i].nmbr]=query(1,1,n,ques[i].st,ques[i].ed);
        }

        for(i=1;i<=q;i++){
            printf("%lld\n",ans[i]);
        }

        M.clear();
    }

    return 0;
}
