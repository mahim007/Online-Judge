#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 2000099
bool tag[maax];
vector<ll>V;
struct data{
    ll N,X;
    bool operator < (const data& p) const{
        if(X!=p.X){
            return X<p.X;
        }
        else{
            return N<p.N;
        }
    }
};
vector<data>R;

void sieve(){
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

ll factor(ll n){
    ll p=0;
    for(ll i=0;V[i]*V[i]<=n;i++){
        while(n%V[i]==0){
            p++;
            n=n/V[i];
        }
    }
    if(n!=1)
        p++;
    return p;
}

void process(){
    ll i,cnt;
    for(i=2;i<=2000000;i++){
        cnt=factor(i);
        data D;
        D.N=i;
        D.X=cnt;
        R.push_back(D);
    }
    sort(R.begin(),R.end());
}

int main(){
    sieve();
    process();
    ll t=1,n;
    while(scanf("%lld",&n)==1){
        if(n==0)
            break;
        if(n==1){
            printf("Case %lld: 1\n",t++);
            continue;
        }
        printf("Case %lld: %lld\n",t++,R[n-2].N);
    }
    return 0;
}
