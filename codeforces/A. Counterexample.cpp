#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll l,r,i,j,k,a,b,c,f;

ll call(){
    for(ll i=l;i<=r;i++){
            for(ll j=i+1;j<=r;j++){
                for(ll k=j+1;k<=r;k++){
                    a=__gcd(i,j);
                    b=__gcd(j,k);
                    c=__gcd(i,k);
                    if(a==1 && b==1 && c!=1){
                        printf("%lld %lld %lld\n",i,j,k);
                        return 0;
                    }
                }
            }
        }

        return 1;
}

int main(){
    scanf("%lld %lld",&l,&r);
    if((r-l+1)<3) printf("-1\n");
    else{
        if(call()) printf("-1");
    }

    return 0;
}
