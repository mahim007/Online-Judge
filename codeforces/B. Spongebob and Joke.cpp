#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;
map<ll,ll>koybar;
vector<ll>V;
vector<ll>res;
int main(){
    ll n,m,i,j,sign=3,d;
    scanf("%lld %lld",&n,&m);
    ll indx=1;
    for(i=1;i<=n;i++){
        scanf("%lld",&d);
        //indx++;
        koybar[d]++;
        M[d]=indx;
        indx++;

    }

    for(i=1;i<=m;i++){
        scanf("%lld",&d);
        if(koybar[d]==0){
            sign=1;
            printf("Impossible\n");
            return 0;
        }

        if(koybar[d]==1){
            V.push_back(M[d]);
        }
        if(koybar[d]>1){
            sign=2;
        }
    }
    if(sign==2){
        printf("Ambiguity\n");
        return 0;
    }
    printf("Possible\n");
    for(i=0;i<V.size();i++){
        printf("%lld ",V[i]);
    }
    printf("\n");
    return 0;
}
