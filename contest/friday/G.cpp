#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 19

ll x[mxn];
ll y[mxn];
map<ll,ll>M,P;


int main(){
    ll n,m;
    ll i,j,k;
    ll ans=0;

    while(scanf("%lld %lld",&n,&m)==2){
        for(i=1;i<=n;i++){
            scanf("%lld",&x[i]);
            M[x[i]]++;
        }
        for(i=1;i<=m;i++){
            scanf("%lld",&y[i]);
            P[y[i]]++;
        } printf("here..\n");

        for(auto it=M.begin();it!=M.end();it++){
            ll x=it->first;
            ll d=max(M[x],P[x]);
            ans+=d*x;
            P.erase(x);
            M.erase(x);

        }

        for(auto it=P.begin();it!=P.end();it++){
            ans+=(it->second*it->first);
            P.erase(it->first);
        }

        printf("ans:%lld\n",ans);
    }
}
