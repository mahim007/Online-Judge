#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 309

char a[mxn][mxn];
map<char,ll>M;

int main(){
    ll n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }

    for(i=1;i<=n;i++) M[a[i][i]]++;
    for(i=1;i<=n;i++) M[a[i][n-i+1]]++;

    if(M.size()!=1){
        cout<<"NO\n";
        return 0;
    }

    char mid=a[n/2+1][n/2+1];
    char c=a[1][2];

    for(i=1;i<=n;i++){
        a[i][i]='1';
        a[i][n-i+1]='1';
    }

    M.clear();
    ll f=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(a[i][j]=='1') continue;
            if(a[i][j]==mid || a[i][j]!=c){
                f=0;
            }
        }
    } //cout<<M.size()<<"\n";

    if(f==0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        //else cout<<"NO\n";
    }

    return 0;
}
