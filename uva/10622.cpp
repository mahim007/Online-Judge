#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 50000
bool tag[maax];
vector<ll>V,P;
map<ll,int>M;
ll total;

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
    total=V.size();
}

ll getans(ll n){
    ll tmp;
    if(n<0){
        tmp=(-1)*n;
    }
    else{
        tmp=n;
    } //cout<<"tmp:"<<tmp<<endl;
    P.clear();
    M.clear();
    ll root=sqrt(tmp)+1;
    for(ll i=0;V[i]<=root && i<total;i++){
        if(tmp%V[i]==0){
            P.push_back(V[i]);
            while(tmp%V[i]==0){
                M[V[i]]++;
                tmp=tmp/V[i];
            }
        }
    }
    if(tmp!=1){
        P.push_back(tmp);
        M[tmp]++;
    }
    ll sz,gcd;
    sz=P.size();
    gcd=M[P[0]];
    for(ll i=0;i<sz;i++){
        ll p=M[P[i]];
        gcd=__gcd(gcd,p);
    }
    if(n<0){
        while(gcd%2==0){
            gcd=gcd/2;
        }
    }
    return gcd;
}

int main(){
    generator();
    ll n;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        ll ans=getans(n);
        printf("%lld\n",ans);
    }
    return 0;
}
