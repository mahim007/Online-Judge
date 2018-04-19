#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1009

ll row[lim],col[lim];
char a[lim][lim];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    ll total=0,n,m,i,j,p,q;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*') total++;
        }
    }

    if(total==0){
        cout<<"YES"<<"\n";
        cout<<1<<" "<<1<<"\n";
        return 0;
    }

    if(total>(n+m-1)){
        cout<<"NO"<<"\n";
        return 0;
    }

    for(i=1;i<=n;i++){
        ll x=0;
        for(j=1;j<=m;j++){
            if(a[i][j]=='*') x++;
        }
        row[i]=x;
    }

    for(i=1;i<=m;i++){
        ll x=0;
        for(j=1;j<=n;j++){
            if(a[j][i]=='*') x++;
        }
        col[i]=x;
    }

    ll f=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            ll x=row[i]+col[j];
            if(a[i][j]=='*') x--;
            if(x==total){
                f=1;
                p=i;
                q=j;
                break;
            }
        }
        if(f) break;
    }

    if(f==0) cout<<"NO\n";
    else{
        cout<<"YES\n";
        cout<<p<<" "<<q<<"\n";
    }

    return 0;
}
