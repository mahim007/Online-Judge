#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll arr[mxn];
vector<ll>V[mxn];

int main(){
    ios_base::sync_with_stdio(0);

    ll n,m,i,j,k,sum=0,ans=0;
    cin>>n>>m;
    for(i=1;i<=m;i++){
        cin>>arr[i];
    }

    for(i=2;i<=m;i++){
        sum+=abs(arr[i]-arr[i-1]);
    }

    for(i=1;i<=m;i++){
        if(i>1 && arr[i]!=arr[i-1]) V[arr[i]].push_back(arr[i-1]);
        if(i<m && arr[i]!=arr[i+1]) V[arr[i]].push_back(arr[i+1]);
    }

    for(i=1;i<=n;i++){
        if(V[i].size()<1){
            continue;
        }

        sort(V[i].begin(),V[i].end());
        ll m=V[i][V[i].size()/2];
        ll after=0,before=0;
        for(j=0;j<V[i].size();j++){
            after+=abs(m-V[i][j]);
            before+=abs(i-V[i][j]);
        }

        ans=max(ans,before-after);
        //sum+=before;
    }

    cout<<sum-ans<<"\n";
    return 0;
}
