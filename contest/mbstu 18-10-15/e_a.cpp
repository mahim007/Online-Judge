#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,a,b,ans,i;
    while(scanf("%lld %lld %lld",&n,&a,&b)==3){
        for(i=1;i<=20;i++){
            if(a<=(1<<i) && b<=(1<<i)){
                ans=i;
                break;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
