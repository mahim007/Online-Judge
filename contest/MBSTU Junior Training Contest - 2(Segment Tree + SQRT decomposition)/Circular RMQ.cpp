#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e19
#define mxn 200009
ll arr[mxn];
struct data{
    ll val,prop;
} tree[4*mxn];

void init(ll idx,ll l,ll r){
    if(l==r){
        tree[idx].val=arr[l];
        tree[idx].prop=0;
        return;
    }

    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;

    init(L,l,mid);
    init(R,mid+1,r);

    tree[idx].val=min(tree[L].val,tree[R].val);
}

void update(ll idx,ll l,ll r,ll x,ll y,ll v){
    if(r<x || l>y) return;
    if(l>=x && r<=y){
        tree[idx].prop+=v;
        tree[idx].val+=v;
        return;
    }

    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;

    update(L,l,mid,x,y,v);
    update(R,mid+1,r,x,y,v);

    tree[idx].val=min(tree[L].val,tree[R].val)+tree[idx].prop;
}

ll query(ll idx,ll l,ll r,ll x,ll y,ll carry){
    if(l>y || r<x) return inf;
    if(l>=x && r<=y){
        return tree[idx].val+carry;
    }

    ll mid=(l+r)>>1;
    ll L=idx<<1;
    ll R=L+1;

    ll p1=query(L,l,mid,x,y,carry+tree[idx].prop);
    ll p2=query(R,mid+1,r,x,y,carry+tree[idx].prop);

    return min(p1,p2);
}

int main(){
    ll n,i,j,k,q;
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
    init(1,1,n); //cout<<"init finished\n";
    scanf("%lld",&q);getchar();
    //cin.ignore();
    for(k=1;k<=q;k++){
//        string s;
//        getline(cin,s);
        char s[109];
        gets(s);
        istringstream ss(s);
        ll d;
        vector<ll>V;
        while(ss>>d){
            V.push_back(d);
        }

        if(V.size()==2){ //cout<<"query\n";
            ll x=V[0];
            ll y=V[1];
            if(V[0]<=V[1]){
                printf("%lld\n",query(1,1,n,x+1,y+1,0));
            }
            else{
                printf("%lld\n",min(query(1,1,n,x+1,n,0),query(1,1,n,1,y+1,0)));
            }
        }
        else{ //cout<<"update\n";
            ll x=V[0];
            ll y=V[1];
            ll z=V[2];
            if(V[0]<=V[1]){
                update(1,1,n,x+1,y+1,z);
            }
            else{
                update(1,1,n,x+1,n,z);
                update(1,1,n,1,y+1,z);
            }
        }

        V.clear();
    }

    return 0;
}
