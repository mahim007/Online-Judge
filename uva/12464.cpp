#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,n;
    while(scanf("%lld %lld %lld",&a,&b,&n)==3){
        if(a==0 && b==0 && n==0){
            break;
        }
        n=n%5;
        if(n==0){
            printf("%lld\n",a);
        }
        else if(n==1){
            printf("%lld\n",b);
        }
        else if(n==2){
            printf("%lld\n",(1+b)/a);
        }
        else if(n==3){
            printf("%lld\n",(1+a+b)/(a*b));
        }
        else{
            printf("%lld\n",(1+a)/b);
        }
    }
    return 0;
}
