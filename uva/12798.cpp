#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll ans,n,m,i,j,k,x;
    while(scanf("%lld %lld",&n,&m)==2){
        ans=0;
        for(i=1;i<=n;i++){
            k=1;
            for(j=1;j<=m;j++){
                scanf("%lld",&x);
                if(x==0) k=0;
            }

            ans+=k;
        }

        printf("%lld\n",ans);
    }

    return 0;
}
