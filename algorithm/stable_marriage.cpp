#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100
vector<ll>V[mx];
ll boy[mx],girl[mx];
ll vis[mx];

bool checkprior(ll g,ll boy1,ll boy2){
    ll i;
    for(i=0;i<V[g].size();i++){
        if(V[g][i]==boy1) return true;
        if(V[g][i]==boy2) return false;
    }
}

int main(){
    ll i,j,k,n,cnt=0,b,g;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            ll d;
            scanf("%lld",&d);
            V[i].push_back(d);
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            ll d;
            scanf("%lld",&d);
            V[n+i].push_back(d);
        }
    }

    memset(boy,-1,sizeof boy);
    memset(girl,-1,sizeof girl);
    cnt=n;
    while(cnt){
        for(b=1;b<=n;b++){
            if(boy[b]==-1){
                break;
            }
        }

        for(i=0;i<V[b].size() && boy[b]==-1;i++){
            g=V[b][i];
            if(girl[g]==-1){
                girl[g]=b;
                boy[b]=g;
                cnt--;
            }
            else{
                ll b2=girl[g];
                if(checkprior(g,b,b2)){
                    boy[b]=g;
                    girl[g]=b;
                    boy[b2]=-1;
                }
            }
        }
    }



    printf("boy\tgirl\n");
    for(i=1;i<=n;i++){
        printf("%lld\t%lld\n",i,boy[i]);
    }

    return 0;
}
