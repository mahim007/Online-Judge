#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz 2*200009
ll arr[sz];

int main(){
    ll n,i,j,k,mn,z;
    cin>>n;
    mn=1e10; //cout<<mn<<endl;
    for(i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]<mn) mn=arr[i];
        arr[i+n]=arr[i];
    }

    z=0;
    j=0;
    for(i=1;i<=n+n;i++){
        if(arr[i]==mn){
            if(i-j-1>z) z=i-j-1;
            j=i;
        }
    }

    cout<<n*mn+z<<endl;
    return 0;
}
