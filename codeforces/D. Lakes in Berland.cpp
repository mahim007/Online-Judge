#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 59

struct data{
    ll sz,x,y,id;
    bool operator < (const data& P) const{
        return sz<P.sz;
    }
};

vector<data>V;
ll vis[mxn][mxn];
char s[mxn][mxn];
ll n,m,syz,ocen;

void dfs(ll u,ll v){
    if(u<1 || u>n || v<1 || v>m){
        ocen=1;
        return;
    }
    //if(u==1 || u==n || v==1 || v==m) return;
    if(vis[u][v]==1 || s[u][v]=='*') return;
    if(vis[u][v]==0 && s[u][v]=='.'){
        vis[u][v]=1;
        syz++;
    }

     dfs(u-1,v);
     dfs(u+1,v);
     dfs(u,v-1);
     dfs(u,v+1);
}

void flood(ll u,ll v){
    if(u<=1 || u>=n || v<=1 || v>=m) return;
            if(vis[u][v]==1 || s[u][v]=='*') return;
            if(vis[u][v]==0 && s[u][v]=='.'){
                vis[u][v]=1;
                s[u][v]='*';
            }
    //cout<<"now:"<<u<<" "<<v<<"\n";
    //s[u][v]='*';
    flood(u-1,v);
    flood(u+1,v);
    flood(u,v-1);
    flood(u,v+1);
}

int main(){
    ll k,i,j,ans=0;
    scanf("%lld %lld %lld",&n,&m,&k);
    getchar();
    for(i=1;i<=n;i++){
        //gets(s[i]);
        for(j=1;j<=m;j++){
            scanf("%c",&s[i][j]);
            vis[i][j]=0;
        }
        getchar();
    }

    ll cnt=0;
    for(i=2;i<n;i++){
        for(j=2;j<m;j++){
            if(s[i][j]=='.' && vis[i][j]==0){
                cnt++;
                syz=0;
                ocen=0;
                dfs(i,j);
                data D;
                D.id=cnt;
                D.sz=syz;
                D.x=i;
                D.y=j;
                if(ocen==0) V.push_back(D);
            }
        }
    } //cout<<"cnt:"<<cnt<<" siz:"<<V.size()<<"\n";

    //for(i=0;i<V.size();i++) cout<<V[i].x<<" "<<V[i].y<<"\n";
    sort(V.begin(),V.end()); //for(i=0;i<V.size();i++) cout<<V[i].x<<" "<<V[i].y<<" siz:"<<V[i].sz<<"\n";
    memset(vis,0,sizeof vis); //cout<<"memo\n";
    for(i=0;i<V.size()-k;i++){
        ans+=V[i].sz; //cout<<"calling:"<<V[i].x<<" "<<V[i].y<<"\n";
        flood(V[i].x,V[i].y);
    }


    printf("%lld\n",ans);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%c",s[i][j]);
        }

        printf("\n");
    }

    return 0;
}
