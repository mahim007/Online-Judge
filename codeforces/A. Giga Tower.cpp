#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char s[15];
ll n,k;

ll call(){
    while(1){
        n++;
        k++;
        ll nn=(ll)abs(n);
        sprintf(s,"%lld",nn);
        ll ln=strlen(s);
        for(ll i=0;i<ln;i++){
            if(s[i]=='8'){
                return k;
            }
        }
    }
}

int main(){
    ll ans;
    scanf("%lld",&n);
    ans=call();
    printf("%lld\n",k);
    return 0;
}
