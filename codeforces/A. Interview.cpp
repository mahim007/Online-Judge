#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1009],b[1009];
int main(){
    ll i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++) cin>>b[i];

    ll ans=-9999999999,val1,val2;
    for(i=1;i<=n;i++){
        val1=a[i];
        val2=b[i];
        for(j=i;j<=n;j++){
            val1=val1|a[j];
            val2=val2|b[j];
            if(ans<val1+val2) ans=val1+val2;
        }
    }

    cout<<ans<<endl;
    return 0;
}
