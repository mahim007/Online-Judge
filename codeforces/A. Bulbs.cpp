#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[109];
int main(){
    ll i,j,k,flag=0,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        for(j=1;j<=d;j++){
            cin>>k;
            arr[k]=1;
        }
    }

    for(i=1;i<=m;i++){
        if(!arr[i]){
            flag=1;
            break;
        }
    }

    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
