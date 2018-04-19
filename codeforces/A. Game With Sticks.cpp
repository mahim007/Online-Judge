#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,m,d;
    scanf("%lld %lld",&n,&m);
    d=min(n,m);
    if(d&1) printf("Akshat\n");
    else printf("Malvika\n");
    return 0;
}
