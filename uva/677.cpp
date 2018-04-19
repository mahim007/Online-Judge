#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[11][11];
ll n,k,cnt;
ll usd[11];
vector<ll>V;

void call(ll now){
    if(V.size()==k+1){
        printf("(1");
        for(ll i=1;i<V.size();i++) printf(",%lld",V[i]);
        printf(")\n");
        cnt++;
        return;
    }

    for(ll i=2;i<=n;i++){
        if(a[now][i]==1 && usd[i]==0){
            usd[i]=1;
            V.push_back(i);
            call(i);
            usd[i]=0;
            V.pop_back();
        }
    }
}

int main(){
    ll i,j,d;
    while(scanf("%lld",&n)==1){
        if(n==-9999){
            printf("\n");
            scanf("%lld %lld",&n,&k);
        }
        else{
            scanf("%lld",&k);
        }

        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%lld",&a[i][j]);
            }
        }

        memset(usd,0,sizeof usd);
        V.push_back(1);
        usd[1]=1;
        cnt=0;
        call(1);
        if(cnt==0){
            printf("no walk of length %lld\n",k);
        }

        V.clear();
    }

    return 0;
}
