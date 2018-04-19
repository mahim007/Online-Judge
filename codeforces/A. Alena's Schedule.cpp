#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[109];

int main(){
    ll n,i,j,k,ans=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>arr[i];
    ll flag=0;
    k=0;
    for(i=1;i<=n;i++){
        if(flag==0 && arr[i]==0) continue;
        else if(arr[i]==1){
            flag=1;
            ans++;
            if(k==1) ans++;
            k=0;
        }
        else if(arr[i]==0){
            k++;
        }
    }

    cout<<ans<<endl;
    return 0;
}
