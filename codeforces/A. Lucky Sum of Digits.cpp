#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,a,b,i,j,four=0,seven=0;
    scanf("%lld",&n);
    a=b=0;
    for(b=0;b*7<=n;b++){
        a=(n-(b*7))/4;
        if((a*4+b*7)==n){
            four=a;
            seven=b;
        }
    }

    if((four*4+seven*7)==n){
        for(i=1;i<=four;i++) printf("4");
        for(i=1;i<=seven;i++) printf("7");
    }
    else printf("-1");
    printf("\n");

    return 0;
}
