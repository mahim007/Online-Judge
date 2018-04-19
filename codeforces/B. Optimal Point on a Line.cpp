#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 300009
ll arr[mxn];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }

    sort(arr+1,arr+1+n);
    if(n&1){
        cout<<arr[(n/2)+1];
    }
    else{
        cout<<arr[n/2];
    }

    cout<<"\n";
    return 0;

}
