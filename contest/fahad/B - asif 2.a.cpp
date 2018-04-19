#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1009];
int main(){
    ll n,i,j,k,ans=0;
    while(cin>>n){
            ans=0;
    for(i=1;i<=n;i++) cin>>a[i];
    ll cnt=0;
    for(i=1;i<=n;i++){
        if(a[i]%2) cnt++;
    }

    if(cnt%2){
        cout<<"NO\n";
    }
    else{
        for(i=1;i<=n;i++){
            if(a[i]%2){
                a[i]++;
                a[i+1]++;
                ans+=2;
            }
        }
        cout<<ans<<"\n";
    }

    }

    return 0;
}
