#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>a,b,x,y;

void subset1(){
    ll n=1<<a.size();
    for(ll i=0;i<n;i++){
        ll sum=0;
        for(ll j=0;j<a.size();j++){
            if(i & (1<<j)){
                sum+=a[j];
            }
        }

        x.push_back(sum);
    }
}

void subset2(){
    ll n=1<<b.size();
    for(ll i=0;i<n;i++){
        ll sum=0;
        for(ll j=0;j<b.size();j++){
            if(i & (1<<j)){
                sum+=b[j];
            }
        }

        y.push_back(sum);
    }
}

int main(){
    ll n,p,q,ans=0,i,j,k;
    while(scanf("%lld %lld %lld",&n,&p,&q)==3){
        for(i=1;i<=n;i++){
            ll d;
            scanf("%lld",&d);
            if(i&1) a.push_back(d);
            else b.push_back(d);
        }

        subset1(); //cout<<"set a:";for(ll z=0;z<x.size();z++) cout<<x[z]<<" "; cout<<endl;
        subset2(); //cout<<"set b:";for(ll z=0;z<y.size();z++) cout<<y[z]<<" "; cout<<endl;
        sort(y.begin(),y.end());
        ans=0;
        for(i=0;i<x.size();i++){
            ll ub=q-x[i];
            ll lb=p-x[i];
            ans+=(upper_bound(y.begin(),y.end(),ub)-y.begin())-(lower_bound(y.begin(),y.end(),lb)-y.begin());
        }

        printf("%lld\n",ans);
        a.clear();
        b.clear();
        x.clear();
        y.clear();
    }

    return 0;
}
