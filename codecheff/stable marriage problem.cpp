#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 509
ll boy[2*mx],girl[2*mx];
//vector<ll>V[2*mx];
ll V[2*mx][mx],n;

bool checkengage(ll g,ll now,ll prev){
    for(ll i=1;i<=n;i++){
        if(V[g][i]==now) return true;
        if(V[g][i]==prev) return false;
    }
}

int main(){
    ll T,t,i,j,cnt,b,g;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            ll x;
            scanf("%lld",&x);
            for(j=1;j<=n;j++){
                //ll d;
                scanf("%lld",&V[x+n][j]);
                //V[i].push_back(d);
            }
        }

        for(i=1;i<=n;i++){
            ll x;
            scanf("%lld",&x);
            for(j=1;j<=n;j++){
                ll d;
                scanf("%lld",&d);
                V[x][j]=d+n;
                //scanf("%lld",&V[i+n][j]);
                //V[n+i].push_back(d);
            }
        }

        memset(boy,-1,sizeof boy);
        memset(girl,-1,sizeof girl);

        cnt=n;
        while(cnt){
            for(b=1;b<=n;b++){
                if(boy[b]==-1) break;
            }

            for(i=1;i<=n && boy[b]==-1;i++){
                g=V[b][i];
                if(girl[g]==-1){
                    girl[g]=b;
                    boy[b]=g;
                    cnt--;
                }
                else{
                    ll b2=girl[g];
                    if(checkengage(g,b,b2)){
                        boy[b]=g;
                        girl[g]=b;
                        boy[b2]=-1;
                    }
                }
            }
        }

        //printf("Case %lld:",t);
        for(i=1;i<=n;i++){
            printf("%lld %lld\n",i,boy[i]-n);
        }
        //printf("\n");
        //for(i=1;i<=2*n;i++) V[i].clear();

    }
    return 0;
}

