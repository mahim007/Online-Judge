#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1000
ll arr[maax];
int main(){
    ll i,j,k,n,l,r,c,cnt,ans,x;
    ans=0;
    cin>>n>>l>>r>>x;
    for(i=1;i<=n;i++){
        scanf("%lld",&arr[i]);
    }
    c=0;
    sort(arr+1,arr+n+1);
    for(k=1;k<=n;k++){ //cout<<"k:"<<arr[k]<<endl;

        for(i=k;i<=n;i++){
            c=0;
            c+=arr[k]; //cout<<arr[k]<<" ";
        for(j=i+1;j<=n;j++){ //cout<<arr[j]<<" ";
            c+=arr[j];
            if(c>=l && c<=r && (ll)abs(arr[j]-arr[k])>=x){
                ans++;
            }
        }//cout<<"ans:"<<ans; cout<<endl;
    }
    }
    cout<<ans<<endl;
}
