#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    ll d=0;
    bool operator < (const data& P) const{
        return d>P.d;
    }
} D[27];
vector<data>V;

int main(){
    ll n,m,i,j,k,ans=0;
    scanf("%lld %lld",&n,&m);
    getchar();
    for(i=1;i<=n;i++){
        char ch;
        scanf("%c",&ch);
        ll x=ch-'A';
        D[x].d++;
    }

    for(i=0;i<27;i++){
        if(D[i].d>0) V.push_back(D[i]);
    }

    sort(V.begin(),V.end());
    for(i=0;i<V.size();i++){
        ll x=min(m,V[i].d);
        m-=x;
        ans+=x*x;
        if(m==0) break;
    }

    printf("%lld\n",ans);
    return 0;
}
