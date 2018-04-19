#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll d1,d2,d3,sum=9999999999999999;
    scanf("%lld %lld %lld",&d1,&d2,&d3);
    sum=min(sum,(d1*2+d2*2));
    sum=min(sum,(d1+d2+d3));
    sum=min(sum,(d1+d3+d3+d1));
    sum=min(sum,(d2+d3+d3+d2));
    printf("%lld\n",sum);
    return 0;
}
