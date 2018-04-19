#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1009
ll a[lim];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    ll n,i,j,ans=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    i=1;
    j=0;
    while(a[i]==0 && i<=n) i++;
    while(i<=n){
        if(a[i]==1){
            ans+=1+min(1ll,j);
            j=0;
        }
        else j++;
        i++;
    }
    cout<<ans<<"\n";
    return 0;
}
