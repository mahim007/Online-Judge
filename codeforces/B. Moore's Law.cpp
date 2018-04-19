#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll s,t;
    scanf("%lld %lld",&s,&t);
    double ans=pow(1.000000011,t);
    ans*=s;
    printf("%.10lf\n",ans);
    return 0;
}
