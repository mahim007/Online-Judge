#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll sett(ll k,ll pos) { return k=k | (1<<pos); }
ll reset(ll k,ll pos) { return k=k & ~(1<<pos); }
bool check(ll k,ll pos) { return (bool)(k & (1<<pos)); }

ll dp[(1<<15)+2];
ll w[16][16];
ll n;

ll bitmask(ll mask){ //cout<<"bitmask called.. mask="<<mask<<endl;
    if(mask==((1<<n)-1)) return 0;
    if(dp[mask]!=-1) return dp[mask];
    ll ans=1<<20; //cout<<"ans:"<<ans<<" n="<<n<<endl;
    for(ll i=0;i<n;i++){
        if(check(mask,i)==0){
            ll ret=w[i][i];
            for(ll j=0;j<n;j++){
                if(i!=j && check(mask,j)!=0) ret+=w[i][j];
            }

            ll p=ret+bitmask(sett(mask,i));
            ans=min(ans,p);
        }
    }
    //cout<<"mask:"<<mask<<" ans:"<<ans<<endl;
    return dp[mask]=ans;
}

int main(){
    ll i,ans,j;
    ans=0;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>w[i][j];
        }
    }

    memset(dp,-1,sizeof dp);
    ans=bitmask(0);
    printf("%lld\n",ans);
    return 0;
}
