#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[59],b[59];

int main(){
    ios_base::sync_with_stdio(0);
    ll n,x,i,ans=0,k=1;
    cin>>n>>x;
    for(i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }

    i=1;
    while(i<=b[n] && k<=n){
        while(i+x<=a[k]){
            i+=x;
        }

        ans+=a[k]-i;
        ans+=b[k]-a[k]+1;
        i=b[k]+1;
        k++;
    }

    cout<<ans<<endl;
    return 0;
}
