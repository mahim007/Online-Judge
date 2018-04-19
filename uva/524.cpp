#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
map<ll,ll>M;
ll n,usd[20];

void __print(){
    printf("%lld",V[0]);
    for(ll i=1;i<V.size();i++) printf(" %lld",V[i]);
    printf("\n");
}

void call(){
    if(V.size()==n){
        if(M[V[n-1]+1]==1){
            __print();
        }
        return;
    }

    for(ll i=2;i<=n;i++){
        if(usd[i]==0){
            if(M[V[V.size()-1]+i]==0) continue;
            usd[i]=1;
            V.push_back(i);
            call();
            usd[i]=0;
            V.pop_back();
        }
    }
}

int main(){
    M[2]=M[3]=M[5]=M[7]=M[11]=M[13]=M[17]=M[19]=M[23]=M[29]=M[31]=1;
    ll t=1;
    while(scanf("%lld",&n)==1){
        V.push_back(1);
        memset(usd,0,sizeof usd);
        if(t>1) printf("\n");
        printf("Case %lld:\n",t);
        call();
        t++;
        V.clear();
    }

    return 0;
}
