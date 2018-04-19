#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
ll a[mxn];
vector<ll>jor,bijor,V[mxn];

ll check(ll b){
    ll sz=bijor.size();
    if((b%2==1) && (sz%2==1)) return 0;
    if((b%2==0) && (sz%2==0)) return 0;
    return 1;
}

int main(){
    ll n,q,p,i,j,k,d,x,y;
    scanf("%lld %lld %lld",&n,&q,&p);
    for(i=1;i<=n;i++){
        scanf("%lld",&d);
        if(d&1) bijor.push_back(d);
        else jor.push_back(d);
    }

    if(check(q-p)){
        printf("NO\n");
        return 0;
    }
    else{
        for(i=1;i<=p;i++){
            if(jor.size()>=1){
                V[i].push_back(jor[jor.size()-1]);
                jor.pop_back();
            }
            else{
                if(bijor.size()>=2){
                    V[i].push_back(bijor[bijor.size()-1]);
                    V[i].push_back(bijor[bijor.size()-2]);
                    bijor.pop_back();
                    bijor.pop_back();
                }
                else{
                    printf("NO\n");
                    return 0;
                }
            }
        }

        for(i=p+1;i<=q;i++){
            if(bijor.size()>=1){
                V[i].push_back(bijor[bijor.size()-1]);
                bijor.pop_back();
            }
            else{
                printf("NO\n");
                return 0;
            }
        }

        while(jor.size()>0){
            V[q].push_back(jor[jor.size()-1]);
            jor.pop_back();
        }

        while(bijor.size()>0){
             V[q].push_back(bijor[bijor.size()-1]);
             bijor.pop_back();
        }

        printf("YES\n");
        for(i=1;i<=q;i++){
            ll sz=V[i].size();
            printf("%lld ",sz);
            for(j=0;j<sz;j++) printf("%lld ",V[i][j]);
            printf("\n");
        }
    }

    return 0;
}
