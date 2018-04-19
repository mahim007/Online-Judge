#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,i,n,digit,cnt;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&digit);
        cnt=0;
        i=digit;
        while(1){
            cnt++;
            digit=digit%n;
            if(digit==0) break;
            digit=digit*10+i;
        }
        printf("Case %lld: %lld\n",t,cnt);
    }
    return 0;
}
