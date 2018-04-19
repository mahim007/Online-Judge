#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,n,i,j,d;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>n;
        d=1;
        while(n){
            d=d+(n&1);
            n=n>>1;
        }

        if(d&1) printf("Case %lld: Odd\n",t);
        else printf("Case %lld: Even\n",t);
    }

    return 0;
}
