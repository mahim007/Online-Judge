#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll flat[100000];
int main(){
    ll n,m,ans=0,i,j,k;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*m;j++){
            scanf("%lld",&flat[j]);
        }
        for(k=2;k<=2*m;k=k+2){
            if(flat[k]==1 || flat[k-1]==1){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
