#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,i,j,k;
    scanf("%lld",&n);
    for(i=1;i<=n;i=i+2){
        ll star=(n-i)/2;
        for(j=1;j<=star;j++) printf("*");
        for(k=1;k<=i;k++) printf("D");
        for(j=1;j<=star;j++) printf("*");
        printf("\n");
    }

    for(i=n-2;i>=1;i=i-2){
        ll star=(n-i)/2;
        for(j=1;j<=star;j++) printf("*");
        for(k=1;k<=i;k++) printf("D");
        for(j=1;j<=star;j++) printf("*");
        printf("\n");
    }

    return 0;
}
