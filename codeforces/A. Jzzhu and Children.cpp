#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    ll d,pos;
};
vector<data>V;

int main(){
    ll n,i,j,k,last=0,m;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        ll x;
        scanf("%lld",&x);
        data D;
        D.d=x;
        D.pos=i;
        V.push_back(D);
    }

    for(i=0;i<V.size();i++){
        ll u;
        V[i].d-=m;;
        last=V[i].pos;
        if(V[i].d>0) V.push_back(V[i]);
    }

    printf("%lld\n",last);
    return 0;
}
