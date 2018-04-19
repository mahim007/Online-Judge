#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 10000007

ll arr[mxn];

int main(){
    ll n,i,j,k,x,y,cnt=0;
    cin>>n>>x>>y;
    arr[1]=x;
    for(i=2;i<=n;i++){
        arr[i]=arr[i-1]+x;
        if(i&1){
            arr[i]=min(arr[i],arr[(i+1)/2]+y+x);
        }
        else{
            arr[i]=min(arr[i],arr[i/2]+y);
        }
    }

    cout<<arr[n]<<"\n";
    return 0;
}
