#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 100009
ll arr[limit];
map<ll,ll>M;
int main(){
    ll n,i,j,k=0,cnt=9999999;
    cin>>n;
    for(i=0;i<n;i++) cin>>arr[i];
    for(i=0;i<n;i++){
        k+=arr[i];
        M[k]++;
        cnt=min(cnt,n-M[k]);
    }

    cout<<cnt<<endl;
    return 0;
}
