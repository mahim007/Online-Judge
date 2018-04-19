#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mxn 100009
#define inf 1<<30

ll a[mxn];
ll found[mxn];

struct data{
    ll p;
    ll val;
    ll lft,ryt;
} D[mxn];

void dfs(ll n,ll mn,ll mx){
    if(D[n].val>=mn && D[n].val<=mx){
        found[n]=1;
    }

    if(D[n].lft!=-1){
        dfs(D[n].lft,mn,min(mx,D[n].val));
    }

    if(D[n].ryt!=-1){
        dfs(D[n].ryt,max(mn,D[n].val),mx);
    }
}


int main(){
    ll n,i,j,k,d,l,r;

    scanf("%lld",&n);

    for(i=1;i<=n;i++){
        D[i].p=i;
    }

    for(i=1;i<=n;i++){
        scanf("%lld %lld %lld",&d,&l,&r);
        a[i]=d;
        D[i].val=d;
        D[i].lft=l;
        D[i].ryt=r;
        if(l!=-1){
            D[l].p=i;
        }

        if(r!=-1){
            D[r].p=i;
        }
    }

    ll root;
    for(i=1;i<=n;i++){
        if(i==D[i].p){
            root=i;
        }
    } //printf("root=%lld\n",root);

    ll ans=0;
    dfs(root,-inf,inf);

    for(i=1;i<=n;i++){
        ans+=found[i];
    }

    printf("%lld\n",n-ans);
    return 0;
}
