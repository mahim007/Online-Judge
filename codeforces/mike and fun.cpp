#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 509
int grid[maax][maax];
int res[maax];
int main(){
    ll n,m,q,i,j,mx=-1;
    cin>>n>>m>>q;
    for(i=1;i<=n;i++){
        mx=0;
        for(j=1;j<=m;j++){
            int d;
            cin>>d;
            grid[i][j]=d;
            if(d==1){
                mx++;
                if(mx>res[i])
                    res[i]=mx;
            }
            else{
                mx=0;
            }
        }
    }
    for(ll k=1;k<=q;k++){
        cin>>i>>j;
        if(grid[i][j]==1){
            grid[i][j]=0;
        }
        else{
            grid[i][j]=1;
        }
        mx=0;
        res[i]=0;
        for(j=1;j<=m;j++){
            if(grid[i][j]==1){
                mx++;
                if(mx>res[i])
                    res[i]=mx;
            }
            else{
                mx=0;
            }
        }
        mx=-1;
        for(i=1;i<=n;i++){
            if(res[i]>mx)
                mx=res[i];
        }
        printf("%lld\n",mx);
    }
    return 0;
}
