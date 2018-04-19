#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[109],n;

ll call(ll i,ll days,ll p){
    if(i>n) return days;
    if(p==0){
        if(a[i]==0) return call(i+1,days+1,0);
        if(a[i]==1) return call(i+1,days,1);
        if(a[i]==2) return call(i+1,days,2);

        if(i+1<=n && a[i+1]==0) return call(i+1,days,1);
        if(i+1<=n && a[i+1]==1) return call(i+1,days,2);
        if(i+1<=n && a[i+1]==2) return call(i+1,days,1);

        if(a[i]==3) return min(call(i+1,days,1),call(i+1,days,2));
    }

    if(p==1){
        if(a[i]==0) return call(i+1,days+1,0);
        if(a[i]==1) return call(i+1,days+1,0);
        if(a[i]==2) return call(i+1,days,2);
        if(a[i]==3) return call(i+1,days,2);
    }

    if(p==2){
        if(a[i]==0) return call(i+1,days+1,0);
        if(a[i]==1) return call(i+1,days,1);
        if(a[i]==2) return call(i+1,days+1,0);
        if(a[i]==3) return call(i+1,days,1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();

    ll i,j,k;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    ll ans=call(1,0,0);
    cout<<ans<<"\n";
    return 0;
}
