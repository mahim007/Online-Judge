#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main(){
    ll flag=0;
    ll l,r,k;
    cin>>l>>r>>k;
    ll ans=1;
    if(l==1){
        cout<<1<<" ";
        flag=1;
    }
    while(ans<=r && ans>0){
        if(ans>=l && ans%k==0){
            flag=1;
            cout<<ans<<" ";
        }

        ans*=k;
    }

    if(ans>=l && ans<=r){
        flag=1;
        cout<<ans;
    }

    if(flag==0) cout<<-1;
    cout<<endl;
    return 0;
}
