#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[509][509];
vector<ll>ans,coin;
ll arr[509],x,n,k;

void call(ll i,ll amount){
    if(i>=n){
        if(amount<=k){
            if(arr[amount]==0){
                x++;
                ans.push_back(amount);
                arr[amount]=1; cout<<"taking:"<<amount<<endl;
            }
        }

        return;
    }

    if(amount>k) return;

    if(amount<=k){
        if(arr[amount]==0){
            x++;
            ans.push_back(amount);
            arr[amount]=1; cout<<"taking:"<<amount<<endl;
        }
    }

    if(amount+coin[i]<=k) call(i+1,amount+coin[i]);
    call(i+1,amount);
    return;
}

int main(){
    ll i,j,d;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>d;
        coin.push_back(d);
    }

    call(0,0);
    sort(ans.begin(),ans.end());
    cout<<x<<"\n";
    d=ans.size();
    for(i=0;i<d;i++) cout<<ans[i]<<" ";
    cout<<"\n";
    return 0;
}
