#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 1e18
#define mxn 200009

ll n,k,s,t;
ll cost[mxn],gas[mxn],dis[mxn];

ll can(ll val){
    ll fast=0;
    for(ll i=1;i<=k+1;i++){
        ll d=dis[i]-dis[i-1];
        if(d>val) return 0;
        fast+=min(d,val-d);
    }

    if((fast+(2*(s-fast)))<=t) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    ll i,j;
    cin>>n>>k>>s>>t;
    for(i=1;i<=n;i++){
        cin>>cost[i]>>gas[i];
    }

    for(i=1;i<=k;i++) cin>>dis[i];

    dis[0]=0;
    dis[k+1]=s;
    sort(dis+1,dis+1+k); //for(i=0;i<=k+1;i++) cout<<dis[i]<<" ";cout<<"\n";

    ll ans=(ll)inf,best=(ll)inf;
    ll lo=1LL,hi=(ll)inf;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        if(can(mid)==1){
            best=min(best,mid);
            hi=mid-1;
        }
        else lo=mid+1;
    } //cout<<"best:"<<best<<"\n";

    if(best==(ll)inf){
        cout<<-1<<"\n";
    }
    else{
        for(i=1;i<=n;i++){
            if(gas[i]>=best){
                ans=min(ans,cost[i]);
            }
        }

        if(ans==(ll)inf) ans=-1;
        cout<<ans<<"\n";
    }

    return 0;
}
