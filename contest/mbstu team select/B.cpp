#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 100009
int main(){
    ll i,j,k,n;
    cin>>n;
    k=0;
    for(i=1;i<=n;i++){
        if(i%2){
            k++;
            printf("%lld ",k);
        }
        else{
            printf("%lld ",n-k+1);
        }
    }
    printf("\n");
    return 0;
}
