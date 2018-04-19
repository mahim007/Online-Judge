#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool mark[109];
vector<ll>V;
ll arr[103];
void sieve(){
    V.push_back(2);
    ll root=sqrt(109);
    for(ll i=3;i<=root;i=i+2){
        if(!mark[i]){
            for(ll j=i*i;j<109;j=j+i+i){
                mark[j]=1;
            }
        }
    }

    for(ll i=3;i<109;i++){
        if(!mark[i]) V.push_back(i);
    }
}

int main(){
    ll T,t,i,j,n,sz,p;
    sieve();
    sz=V.size();
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=2;i<=n;i++){
            p=i;
            for(j=0;V[j]*V[j]<=p;j++){
                ll x=0;
                while(p%V[j]==0){
                    x++;
                    p=p/V[j];
                }
                arr[V[j]]+=x;
            }
            if(p!=1){
                arr[p]+=1;
            }
        }

        printf("Case %lld: %lld =",t,n);
        ll flag=0;
        for(i=2;i<=n;i++){
            if(arr[i]>0){
                if(flag!=0) printf(" *");
                printf(" %lld (%lld)",i,arr[i]);
                flag=1;
            }
            arr[i]=0;
        }
        printf("\n");
    }
    return 0;
}
