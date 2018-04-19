#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 2009
map<ll,ll>M;
ll arr[mxn];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,i,j,k,mx=0,change=0,d,s=0,odd=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cin>>arr[i];
        M[arr[i]]++;
        if(arr[i]<=m) s+=1;
    }

    mx=n/m;
    if(mx*m==n){
        odd=0;
    }
    else odd=n-(mx*m);
     //cout<<odd<<" \n";
    for(i=1;i<=m;i++){
        ll cnt=max(0ll,mx-M[i]);
        for(j=1;j<=n;j++){
            if(arr[j]==i) continue;
            else if(arr[j]>m && cnt){
                cnt--;
                arr[j]=i;
                change++;
            }
            else if(arr[j]<=m && odd && M[arr[j]]>=mx+1 && cnt){
                M[arr[j]]--;
                arr[j]=i;
                change++;

                odd--;
                cnt--;
            }
            else if(arr[j]<=m && odd==0 && M[arr[j]]>mx && cnt){
                M[arr[j]]--;
                arr[j]=i;
                change++;

                cnt--;
            }
        }
    }

    cout<<mx<<" "<<change<<"\n";
    for(i=1;i<=n;i++) cout<<arr[i]<<" ";
}
