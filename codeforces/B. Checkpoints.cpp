#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 99999999999999
#define mxn 100009
ll arr[mxn];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,a;
    cin>>n>>a;
    for(i=1;i<=n;i++) cin>>arr[i];
    sort(arr+1,arr+1+n);
    //for(i=1;i<=n;i++) cout<<arr[i]<<" ";cout<<"\n";
    ll x,y;

    if(n==1){
        cout<<0<<"\n";
        return 0;
    }

    ll mn=inf;
    {
        mn=min(abs(a-arr[1]),abs(a-arr[n-1]));
        ll sum=0;
        for(i=1;i<n-1;i++){
            sum+=abs(arr[i]-arr[i+1]);
        }
        if(mn==inf) mn=0;
        x=sum+mn;
    }
    {
        mn=99999999999999;
        mn=min(abs(a-arr[2]),abs(a-arr[n]));
        ll sum=0;
        for(i=2;i<n;i++){
           sum+=abs(arr[i]-arr[i+1]);
        }
        if(mn==inf) mn=0;
        y=sum+mn;
    }

    cout<<min(x,y)<<"\n";
    return 0;
}
