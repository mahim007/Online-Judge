#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9

int main(){
    ll s,t;
    scanf("%lld %lld",&s,&t);
    double ans=pow(1.000000011,(double)t);
    ans*=s;
    printf("%.15lf\n",ans+eps);
    return 0;
}
