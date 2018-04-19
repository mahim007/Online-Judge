#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll x[59],y[59];
int main(){
    ll n,a,b,i;
    cin>>n;
    for(i=1;i<=n*n;i++){
        cin>>a>>b;
        if(!x[a] && !y[b]){
            cout<<i<<" ";
            x[a]=1;
            y[b]=1;
        }
    }
    cout<<endl;
    return 0;
}
