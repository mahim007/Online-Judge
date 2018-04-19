#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll arr[mxn];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i,j,k,b,d,cnt=0;
    cin>>n>>b>>d;
    for(i=1;i<=n;i++) cin>>arr[i];

    ll sum=0;
    for(i=1;i<=n;i++){
        if(arr[i]<=b){
            sum+=arr[i];
            if(sum>d){
                cnt++;
                sum=0;
            }
        }
    }

    cout<<cnt<<"\n";
    return 0;
}
