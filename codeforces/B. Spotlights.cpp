#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009

ll a[mxn][mxn];
ll row[mxn][mxn];
ll col[mxn][mxn];

int main(){
    ios_base::sync_with_stdio(0);

    ll n,m,i,j,k,ans=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
           row[i][j]=col[i][j]=a[i][j];
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            row[i][j]+=row[i][j-1];
        }
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            col[j][i]+=col[j-1][i];
        }
    }

//     cout<<"\n\n";
//    for(i=1;i<=n;i++){
//        for(j=1;j<=m;j++){
//            cout<<row[i][j]<<" ";
//        } cout<<"\n";
//    }
//
//     cout<<"\n\n";
//    for(i=1;i<=n;i++){
//        for(j=1;j<=m;j++){
//            cout<<col[i][j]<<" ";
//        } cout<<"\n";
//    } cout<<"\n\n";

    ans=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]==0){
                if(row[i][m]-row[i][j]>0) ans++; //cout<<ans<<" ...\n";
                if(row[i][j]-row[i][0]>0) ans++;// cout<<ans<<" ...\n";
                if(col[n][j]-col[i][j]>0) ans++;// cout<<ans<<" ...\n";
                if(col[i][j]-col[0][j]>0) ans++;// cout<<ans<<" ...\n";
            }
        }
    }

    cout<<ans<<"\n";
    return 0;
}
