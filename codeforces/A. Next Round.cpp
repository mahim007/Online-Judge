#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll a[59];

int main(){
    ll n,i,ans=0,k;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }

    ll d=a[k];
    if(d==0){
        for(i=1;i<=n;i++){
            if(a[i]>d) ans++;
        }
    }
    else{
        for(i=1;i<=n;i++){
            if(a[i]>=d) ans++;
        }
    }

    cout<<ans<<"\n";
    return 0;
}
