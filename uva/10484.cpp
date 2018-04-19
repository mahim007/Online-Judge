#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 109
bool tag[maax];
vector<ll>V;
ll fact[30];

void generator(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i=i+2){
        tag[i]=1;
    }
    for(ll i=3;i*i<maax;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=j+i+i){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
}

ll getpow(ll p,ll n){
    ll res=0;
    for(ll i=p;i<=n;i=i*p){
        res=res+n/i;
    }
    return res;
}

ll getans(ll n,ll m){
    if(n==0){
        if(m==1)
            return 1;
        else
            return 0;
    }
    memset(fact,0,sizeof fact);
    ll i,p;
    p=0;
    for(i=2;V[p]<=n;i++){
        fact[p]=getpow(V[p],n);
        p++;
    }
    ll sz=V.size();
    for(i=0;i<sz && m!=1;i++){
        while(m%V[i]==0){
            fact[i]--;
            if(fact[i]<0)
                return 0;
            m=m/V[i];
        }
    }
    if(m!=1)
        return 0;
    ll res=1;
    for(i=0;i<25;i++){
        if(fact[i]){
            res=res*(fact[i]+1);
        }
    }
    return res;
}

int main(){
    generator();
    ll n,m;
    while(scanf("%lld %lld",&n,&m)==2){
        if(n==0 && m==0){
            break;
        }
        ll res=getans(n,m);
        printf("%lld\n",res);
    }
    return 0;
}
