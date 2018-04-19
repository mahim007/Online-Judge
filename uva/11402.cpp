#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1024009

ll tree[4*mxn],lazy[4*mxn];
string pirates;
char s[100];

void build(ll node,ll l,ll r){
    lazy[node]=-1;
    if(l==r){
        tree[node]=pirates[l]-'0'; //cout<<node<<" "<<l<<" "<<tree[node]<<"\n";
        return;
    }

    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    build(L,l,mid);
    build(R,mid+1,r);
    tree[node]=tree[L]+tree[R];
}

void update(ll node,ll l,ll r,ll x,ll y,ll val){
    if(lazy[node]!=-1){
        if(lazy[node]==2){
            tree[node]=abs(tree[node]-(r-l+1));
            if(l!=r){
                if(lazy[2*node]==1) lazy[2*node]=0;
                else if(lazy[2*node]==0) lazy[2*node]=1;
                else if(lazy[2*node]==-1) lazy[2*node]=2;
                else if(lazy[2*node]==2) lazy[2*node]=-1;

                if(lazy[(2*node)+1]==1) lazy[(2*node)+1]=0;
                else if(lazy[(2*node)+1]==0) lazy[(2*node)+1]=1;
                else if(lazy[(2*node)+1]==-1) lazy[(2*node)+1]=2;
                else if(lazy[(2*node)+1]==2) lazy[(2*node)+1]=-1;
            }

            lazy[node]=-1;
        }
        else{
            tree[node]=(r-l+1)*lazy[node];
            if(l!=r){
                lazy[2*node]=lazy[node];
                lazy[(2*node)+1]=lazy[node];
            }

            lazy[node]=-1;
        }
    }

    if(l>y || r<x) return;
    if(l>=x && r<=y){
        if(val==2){
            tree[node]=abs(tree[node]-(r-l+1));
            if(l!=r){
                if(lazy[2*node]==1) lazy[2*node]=0;
                else if(lazy[2*node]==0) lazy[2*node]=1;
                else if(lazy[2*node]==-1) lazy[2*node]=2;
                else if(lazy[2*node]==2) lazy[2*node]=-1;

                if(lazy[(2*node)+1]==1) lazy[(2*node)+1]=0;
                else if(lazy[(2*node)+1]==0) lazy[(2*node)+1]=1;
                else if(lazy[(2*node)+1]==-1) lazy[(2*node)+1]=2;
                else if(lazy[(2*node)+1]==2) lazy[(2*node)+1]=-1;
            }
        }
        else{
            tree[node]=(r-l+1)*val;
            if(l!=r){
                lazy[2*node]=val;
                lazy[(2*node)+1]=val;
            }
        }

        return;
    }

    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;

    update(L,l,mid,x,y,val);
    update(R,mid+1,r,x,y,val);
    tree[node]=tree[L]+tree[R];
}

ll query(ll node,ll l,ll r,ll x,ll y){
    if(l>y || r<x) return 0;
    if(lazy[node]!=-1){
        if(lazy[node]==2){
            tree[node]=abs(tree[node]-(r-l+1));
            if(l!=r){
                if(lazy[2*node]==1) lazy[2*node]=0;
                else if(lazy[2*node]==0) lazy[2*node]=1;
                else if(lazy[2*node]==-1) lazy[2*node]=2;
                else if(lazy[2*node]==2) lazy[2*node]=-1;

                if(lazy[(2*node)+1]==1) lazy[(2*node)+1]=0;
                else if(lazy[(2*node)+1]==0) lazy[(2*node)+1]=1;
                else if(lazy[(2*node)+1]==-1) lazy[(2*node)+1]=2;
                else if(lazy[(2*node)+1]==2) lazy[(2*node)+1]=-1;
            }

            lazy[node]=-1;
        }
        else{
            tree[node]=(r-l+1)*lazy[node];
            if(l!=r){
                lazy[2*node]=lazy[node];
                lazy[(2*node)+1]=lazy[node];
            }

            lazy[node]=-1;
        }
    }

    if(l>=x && r<=y) return tree[node];
    ll mid=(l+r)>>1;
    ll L=node<<1;
    ll R=L+1;
    return query(L,l,mid,x,y)+query(R,mid+1,r,x,y);
}

int main(){ //freopen("11402 output.txt","w",stdout);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    ll T,t,i,j,k,n,m,q,x,y;
    //cin>>T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        //cin>>n;
        scanf("%lld",&n);
        pirates.clear();
        pirates+='x';
        for(i=1;i<=n;i++){
            //cin>>m;
            scanf("%lld",&m);
            getchar();
            gets(s);
            //cin>>s;
            for(j=1;j<=m;j++) pirates+=s;
        } //cout<<pirates<<"\n";

        n=pirates.size();
        n--;
        build(1,1,n); //cout<<"build complete\n";
        ll g=1;
        //cin>>q;
        scanf("%lld",&q);
        getchar();
        //cout<<"Case "<<t<<":\n";
        printf("Case %lld:\n",t);
        for(k=1;k<=q;k++){
            //cin>>s>>x>>y;
            //cin>>s;
            scanf("%s %lld %lld",s,&x,&y);
            getchar();
            if(s[0]=='F'){
                update(1,1,n,x+1,y+1,1);
            }
            else if(s[0]=='E'){
                update(1,1,n,x+1,y+1,0);
            }
            else if(s[0]=='I'){
                update(1,1,n,x+1,y+1,2);
            }
            else if(s[0]=='S'){
                ll ans=query(1,1,n,x+1,y+1);
                //cout<<"Q"<<g<<": ";
                //cout<<ans<<"\n";
                printf("Q%lld: %lld\n",g,ans);
                g++;
            }
        }
    }

    return 0;
}
