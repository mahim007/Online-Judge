#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>V,P;
map<ll,ll>M;

void calc(){
    ll sz=V.size();
    if(sz>=1 && sz<=10){
        ll z=0;
        for(ll i=0;i<sz;i++){
            z=z*10+V[i];
        }

        M[z]=1;
    }

    if(sz==10) return;

    V.push_back(0);
    calc();
    V.pop_back();
    V.push_back(1);
    calc();
    V.pop_back();
}

void calc2(){
    map<ll,ll>::iterator it;
    for(it=M.begin();it!=M.end();it++){
        P.push_back(it->first);
    }
}

int main(){
    calc();
    calc2();
    ll n,ans=0,i,sz;
    scanf("%lld",&n);
    sz=P.size();
    for(i=0;i<sz;i++){ //cout<<P[i]<<" ";
        if(P[i]>0 && P[i]<=n) ans++;
    }

    printf("%lld\n",ans);
    return 0;
}
