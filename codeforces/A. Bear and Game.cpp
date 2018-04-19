#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll i,j,k,ans=0;
    ll n;
    cin>>n;
    ll flag=0;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        if(i==1 && d>15){
            ans=15;
            flag=1;
        }
        else if(flag==0){
            k=d-ans;
            if(k>15){
                ans+=15;
                flag=1;
            }
            else{
                ans=d;
            }
        }
    }
    if(flag==0)
        ans+=15;
    if(ans>90) ans=90;

    cout<<ans<<endl;
    return 0;
}
