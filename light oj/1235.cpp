#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>a,b,x,y;

void subset1(ll pos,ll val){
    x.push_back(val);
    if(pos<a.size()){
        subset1(pos+1,val);
        subset1(pos+1,val+a[pos]);
        subset1(pos+1,val+a[pos]+a[pos]);
    }
}

void subset2(ll pos,ll val){
    y.push_back(val);
    if(pos<b.size()){
        subset2(pos+1,val);
        subset2(pos+1,val+b[pos]);
        subset2(pos+1,val+b[pos]+b[pos]);
    }
}

int main(){
    ll T,t,i,j,k,n,q;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&q);
        for(i=1;i<=n;i++){
            ll d;
            scanf("%lld",&d);
            if(i&1) a.push_back(d);
            else b.push_back(d);
        }

        subset1(0,0); //cout<<"set a:";for(ll z=0;z<x.size();z++) cout<<x[z]<<" "; cout<<endl;
        subset2(0,0); //cout<<"set b:";for(ll z=0;z<y.size();z++) cout<<y[z]<<" "; cout<<endl;
        sort(y.begin(),y.end());
        ll flag=0;
        for(i=0;i<x.size();i++){
            ll d=q-x[i];
            if(binary_search(y.begin(),y.end(),d)){
                flag=1;
                break;
            }
        }

        printf("Case %lld: ",t);
        if(flag) printf("Yes\n");
        else printf("No\n");

        a.clear();
        b.clear();
        x.clear();
        y.clear();
    }

    return 0;
}
