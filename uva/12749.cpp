#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

ll bigmod(ll b,ll p){
    ll ans=1;
    while(p){
        if(p&1) ans=(ans*b)%mod;
        p=p>>1;
        b=(b*b)%mod;
    }
    return ans%mod;
}

int main(){
    ll T,t,i,d,v,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&d,&v);
        printf("Case %lld: ",t);
        if(d==0){
            printf("1\n");
            continue;
        }
        if(d==1){
            printf("%lld\n",(v+1)%mod);
            continue;
        }
        if(v==1){
            printf("-1\n");
            continue;
        }
        if(v==2){
            printf("%lld\n",((d*v)+1)%mod);
            continue;
        }

        ans=bigmod(v-1,d)-1; //cout<<ans<<endl;
        ans=(ans+mod)%mod;
        ans=(ans*v)%mod; //cout<<ans<<endl;
        //ans=ans-2; cout<<ans<<endl;
        ans=ans*bigmod(v-2,mod-2); //cout<<ans<<endl;
        ans=(ans+1)%mod;
        printf("%lld\n",ans);
    }
    return 0;
}
