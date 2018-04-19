#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>a,b,x,y;
//map<ll,ll>M;
void subset1(ll pos,ll val){
    ll n=1LL<<a.size();
    ll ans;
    for(ll i=0;i<n;i++){
        ans=0;
        for(ll j=0;j<a.size();j++){
            if(i & (1<<j)){
                ans+=a[j];
            }
        }

        x.push_back(ans);
    }
}

void subset2(ll pos,ll val){
    ll n=1LL<<b.size();
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans=0;
        for(ll j=0;j<b.size();j++){
            if(i & (1<<j)){
                ans+=b[j];
            }
        }

        y.push_back(ans);
    }
}

ll binary(ll p,ll q){
    ll low=0;
    ll sz=0;
    ll high=y.size()-1;
    while(low<=high){
        ll mid=(low+high)/2;
        if(y[mid]+p>q){
            high=mid-1;
        }
        else{
            for(ll i=mid;i<y.size();i++){
                if(p+y[i]<=q) sz++;
                else break;
            }

            for(ll i=mid-1;i>=0;i--){
                if(p+y[i]<=q) sz++;
            }
        }

        return sz;
    }

    return 0;
}

int main(){
    ll T,t,i,j,k,n,q,ans,d;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        for(i=1;i<=n;i++){
            scanf("%lld",&d);
            if(i&1) a.push_back(d);
            else b.push_back(d);
        }

        subset1(0,0); //cout<<"set a:";for(ll z=0;z<x.size();z++) cout<<x[z]<<" "; cout<<endl;
        //M.clear();
        subset2(0,0); //cout<<"set b:";for(ll z=0;z<y.size();z++) cout<<y[z]<<" "; cout<<endl;
        //M.clear();
        ans=0;
        sort(y.begin(),y.end());
        for(i=0;i<x.size();i++){
            //if(x[i]<=q)
            //    ans+=binary(x[i],q); //cout<<"ans:"<<ans<<endl;
            ll d=q-x[i];
            ans+=upper_bound(y.begin(),y.end(),d)-y.begin();
        }

        printf("Case %lld: %lld\n",t,ans);
        a.clear();
        b.clear();
        x.clear();
        y.clear();
    }

    return 0;
}
