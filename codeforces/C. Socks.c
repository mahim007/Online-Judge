#include<stdio.h>
#define ll int
#define mxn 200009

ll par[mxn];

ll find_par(ll u){
    if(par[u]==u) return u;
    return par[u]=find_par(par[u]);
}

int main(){
    ll n,m,k,i,j,cnt,u,v;
    cnt=0;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++) scanf("%d",&par[i]);
    for(i=1;i<=m;i++){

        scanf("%d %d",&u,&v);
        u=find_par(u);
        v=find_par(v);

        if(par[u]!=par[v]){
            cnt++;
            par[u]=v;
        }
    }

    printf("%d\n",cnt);
    return 0;
}
