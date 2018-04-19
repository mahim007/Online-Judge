#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 46400
#define mod 1000000007
bool mark[lim];
vector<ll>V;
ll vn;

void sieve(){
    V.push_back(2);
    for(ll i=3;i*i<lim;i=i+2){
        if(!mark[i]){
            for(ll j=i*i;j<lim;j=j+i+i){
                mark[j]=1;
            }
        }
    }
    for(ll i=3;i<lim;i++){
        if(!mark[i]){
            V.push_back(i);
        }
    }
}

ll bigmod(ll b,ll p){
    ll num=1;
    while(p>0){
        if(p&1){
            num=(num*b)%mod;
        }

        b=(b*b)%mod;
        p=p>>1;
    }
    return num;
}

ll sod(ll a,ll b){
    ll res=(bigmod(a,b)-1)%mod;
    res=(res*bigmod(a-1,mod-2))%mod;
    return (res+mod)%mod;
}

int main(){
    ll T,t,i,j,n,m,total;
    sieve();
    vn=V.size();
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&m);
        total=1;
        for(i=0;V[i]*V[i]<=n && i<vn;i++){
            ll cnt=0;
            if(n%V[i]==0){
                while(n%V[i]==0){
                    cnt++;
                    n=n/V[i];
                }

                total=(total*sod(V[i],cnt*m+1))%mod;
            }
        }

        if(n!=1){
            total=(total*sod(n,m+1))%mod;
        }

        printf("Case %lld: %lld\n",t,total);
    }
    return 0;
}
