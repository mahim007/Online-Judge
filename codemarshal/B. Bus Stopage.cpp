#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll T,t,i,j,k,a,b,mx,n,total;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        mx=0;
        total=0;
        scanf("%lld",&n);
        for(i=1;i<n;i++){
            scanf("%lld %lld",&a,&b);
            total+=a-b;
            if(total>mx) mx=total;
        }

        printf("Case %lld: %lld\n",t,mx);
    }

    return 0;
}
