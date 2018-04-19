#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define lim 2000000099
ll a[100009],b[100009];
ll n,k;
ll check_mid(ll md){
    ll val=0;
    for(ll i=1;i<=n;i++){ //cout<<mid*a[i]<<" "; system("pause");
        if(md*a[i]>b[i]){
            val+=(md*a[i])-b[i];
        }
    }

    if(val>k) return 0;
    else return 1;
}

int main(){
    ll i,ans=0;
    cin>>n>>k;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++) cin>>b[i];
    ll low=0;
    ll high=lim;
    while(low<=high){
        ll mid=(low+high)/2;
        if(check_mid(mid)==1){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
