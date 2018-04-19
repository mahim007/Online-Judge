#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[101];
int main(){
    ll n,p,i,cnt=0;
    cin>>n;
    cin>>p;
    for(i=1;i<=p;i++){
        ll x;
        cin>>x;
        arr[x]=1;
    }
    cin>>p;
    for(i=1;i<=p;i++){
        ll x;
        cin>>x;
        arr[x]=1;
    }
    for(i=1;i<=n;i++){
        if(arr[i]==1)
            cnt++;
    }
    if(cnt==n){
        printf("I become the guy.\n");
    }
    else{
        printf("Oh, my keyboard!\n");
    }
    return 0;
}
