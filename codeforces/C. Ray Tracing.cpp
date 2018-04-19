#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

ll point[mxn][3];
map<pair<ll,ll>,ll> M,P,vis;
ll n,m,q,t;
ll up;
ll lft;

ll corner(ll x,ll y){
    if(x==0 && y==0) return 1;
    if(x==0 && y==m) return 1;
    if(x==n && y==0) return 1;
    if(x==n && y==m) return 1;
    return 0;
}

void proc(){
    ll x=0;
    ll y=0;
    while(1){
        t++;
        if(lft==1) x++;
        else x--;

        if(up==1) y++;
        else y--;

        if(M[make_pair(x,y)]==1 && P[make_pair(x,y)]==0){
            P[make_pair(x,y)]=t;
        }

        vis[make_pair(x,y)]++;
        if(vis[make_pair(x,y)]>=4){
            cout<<"too many\n";
            break;
        }

        if(corner(x,y)){
            break;
        }

        if(P.size()==q) break;

        if(x==n) lft=0;
        else if(x==0) lft=1;

        if(y==m) up=0;
        else if(y==0) up=1;
    }
}

int main(){
    ll i,j,k,u,v;
    scanf("%lld %lld %lld",&n,&m,&q);
    for(i=1;i<=q;i++){
        scanf("%lld %lld",&u,&v);
        point[i][1]=u;
        point[i][2]=v;
        M[make_pair(u,v)]=1;
    }


    up=lft=1;
    proc();
    for(i=1;i<=q;i++){
        u=point[i][1];
        v=point[i][2];

        if(P[make_pair(u,v)]!=0) printf("%lld\n",P[make_pair(u,v)]);
        else printf("-1\n");
    }

    return 0;
}
