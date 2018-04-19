#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 509

string s[mxn];
ll vis[mxn][mxn];
ll n,m,cnt,land,k;

void dfs(ll u,ll v){
    if(cnt>=(land-k)) return;
    if(u<0 || u>=n || v<0 || v>=m) return;
    if(vis[u][v]==1) return;
    if(s[u][v]!='.') return;

    cnt++;
    vis[u][v]=1;
    dfs(u+1,v);
    dfs(u-1,v);
    dfs(u,v+1);
    dfs(u,v-1);
}

void check(){
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(s[i][j]=='.'){
                dfs(i,j);
                return;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll i,j;
    cin>>n>>m>>k;
    for(i=0;i<n;i++){
        cin>>s[i];
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]=='.') land++;
        }
    }

    check();

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]=='#') cout<<s[i][j];
            else if(s[i][j]=='.' && vis[i][j]==1) cout<<s[i][j];
            else cout<<"X";
        }

        cout<<"\n";
    }

    return 0;
}
