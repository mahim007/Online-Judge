#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 50009

ll dp[mxn][7];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll m,n,i,j;
    cin>>m>>n;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>>dp[i][j];
        }
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1])+dp[i][j];
        }
    }

    for(i=1;i<=m;i++) cout<<dp[i][n]<<" ";
    cout<<"\n";

    return 0;
}
