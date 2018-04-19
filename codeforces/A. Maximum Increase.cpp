#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100009];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i,j,k,ans=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    a[0]=-1;
    ll r=0;
    for(i=1;i<=n;i++){
        if(a[i]>a[i-1]){
            r++;
        }
        else{
            r=1;
        }

        if(r>ans) ans=r;
    }

    cout<<ans<<"\n";
    return 0;
}
