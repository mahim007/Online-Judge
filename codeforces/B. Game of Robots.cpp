#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[100009];
int main(){
    ll n,k,i,j,s1,s2;
    cin>>n>>k;
    for(i=1;i<=n;i++) cin>>arr[i];
    for(i=1;i<=n;i++){
        s2=(i*(i+1))/2;
        if(s2>=k) break;
    }

    i--;
    if(i<=0) s1=0;
    else s1=(i*(i+1))/2;
    j=k-s1; //cout<<"j:"<<j<<endl;
    cout<<arr[j]<<endl;
    return 0;
}
