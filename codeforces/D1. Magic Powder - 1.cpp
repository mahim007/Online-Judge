#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[3][1009];

int main(){
    ll n,k,i,j,ans=0;
    cin>>n>>k;
    for(i=1;i<=n;i++) cin>>arr[1][i];
    for(i=1;i<=n;i++) cin>>arr[2][i];

    while(1){
        ll val=0;
        for(i=1;i<=n;i++){
            if(arr[1][i]<=arr[2][i]){
                arr[2][i]-=arr[1][i];
            }
            else{
                val+=arr[1][i]-arr[2][i];
                arr[2][i]=0;
            }
        }

        if(val<=k){
            k-=val;
            ans++;
        }
        else{
            break;
        }
    }

    cout<<ans<<endl;
}
