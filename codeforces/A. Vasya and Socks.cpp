#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,m,i,j,k,ans=0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){
        ans++;
        if(i%m==0) n+=1;
    }

    printf("%lld\n",ans);
    return 0;
}
