#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 30009
ll arr[limit];

int main(){
    ll n,t,i;
    cin>>n>>t;
    for(i=1;i<n;i++) cin>>arr[i];
    i=1;
    ll flag=0;
    while(i<=n){
        if(i==t){
            flag=1;
            break;
        }
        if(i>t){
            break;
        }
        i+=arr[i];
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
