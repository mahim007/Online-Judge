#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109

ll n;

struct data{
    ll vis,u,v;
} node[mxn];

void dfs(ll z,ll x,ll y){
    node[z].vis=1;
    for(ll i=1;i<=n;i++){
        if(node[i].vis==0){
            if(x==node[i].u || y==node[i].v){
                dfs(i,node[i].u,node[i].v);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll i,x,y;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x>>y;
        node[i].vis=0;
        node[i].u=x;
        node[i].v=y;
    }

    ll ans=0;
    for(i=1;i<=n;i++){
        if(node[i].vis==0){
            dfs(i,node[i].u,node[i].v);
            ans++;
        }
    }

    cout<<ans-1<<"\n";
    return 0;
}
