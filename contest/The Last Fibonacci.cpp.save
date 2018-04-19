#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1000000009

ll ar[mxn];

int main(){
    ll T,t,a,b,c,n;

    a=0;
    b=1;

    for(ll i=2;i<=mxn;i++){
        c=a+b;
        a=b;
        b=c;
        ar[i]=c;
    }

    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        if(n==0) printf("0\n");
        else if(n==1) printf("1\n");
        else{
            printf("Case %lld: %lld is the last digit.\n",t,(ll)ar[n]%10);
        }
    }

    return 0;
}
