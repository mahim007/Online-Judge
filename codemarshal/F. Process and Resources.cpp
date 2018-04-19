#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<ll,ll>M;

int main(){
    ll T,t,n,x,pid,rid,i;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&x);
            if(x==1){
                scanf("%lld %lld",&pid,&rid);
                if(M[rid]==0){
                    printf("Y\n");
                    M[rid]=pid;
                }
                else printf("N\n");
            }
            else{
                scanf("%lld",&rid);
                if(M[rid]==0){
                    printf("F\n");
                }
                else{
                    printf("%lld\n",M[rid]);
                    M[rid]=0;
                }
            }
        }

        M.clear();
    }

    return 0;
}
