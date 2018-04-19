#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll cap[29];
vector<ll>V[29];
ll match[1009];
ll vis[1009];
ll k,p;

ll kuhn(ll u){
    //ll cnt=0;
    for(ll i=0;i<V[u].size();i++){
        ll v=V[u][i];
        if(vis[v]) continue;
        vis[v]=1;
        if(match[v]==-1){
            match[v]=u;
            return 1;
        }
        else{
            if(kuhn(match[v])){
                match[v]=u;
                return 1;
            }
        }
    }

    return 0;
}

int main(){
    ll i,j,k,n,target,t=1;
    while(scanf("%lld %lld",&k,&p)==2){
        if(k==0 && p==0) break;
        target=0;
        for(i=1;i<=k;i++){
            scanf("%lld",&cap[i]);
            target+=cap[i];
        }

        for(i=1;i<=p;i++){
            scanf("%lld",&n);
            for(j=1;j<=n;j++){
                ll d;
                scanf("%lld",&d);
                V[d].push_back(i);
            }
        }

        ll ans=0;
        memset(match,-1,sizeof match);
        for(i=1;i<=k;i++){
            while(cap[i]--){
            for(ll z=1;z<=p;z++) vis[z]=0;
            if(kuhn(i)){
                ans++;
            }
            }
        }
        //cout<<"case:"<<t++<<endl;
        if(ans!=target){
            printf("0\n");
        }
        else{
            printf("1\n");
            for(i=1;i<=k;i++){
                ll flag=0;
                for(j=1;j<=p;j++){
                    if(match[j]==i){
                        if(flag==0){
                            printf("%lld",j);
                            flag=1;
                        }
                        else{
                            printf(" %lld",j);
                        }
                    }
                }

                printf("\n");
            }
        }

        for(ll z=0;z<29;z++) V[z].clear();
    }
    return 0;
}
