#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll wish[31][31];
ll arr[31];
int main(){
    ll n,m,k,i,j,T,t,p,w,y;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld",&n,&m,&k);
        for(i=1;i<=n;i++){
            for(j=1;j<=k;j++){
                scanf("%lld",&wish[i][j]);
            }
        }

        scanf("%lld",&p);
        for(i=1;i<=p;i++){
            ll x;
            scanf("%lld",&x);
            arr[x]=t;
        }
        ll ans=1;


            for(j=1;j<=n;j++){
                y=0;
                for(w=1;w<=k;w++){
                    if(wish[j][w]<0){
                        if(arr[abs(wish[j][w])]!=t){
                            y++;
                            break;
                        }
                    }
                    else if(wish[j][w]>=1){
                        if(arr[wish[j][w]]==t){
                            y++;
                            break;
                        }
                    }
                }
                if(y<=0){
                    ans=0;
                    break;
                }
            }
        printf("Case %lld: ",t);
        if(ans)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
