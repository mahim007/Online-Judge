#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll a,b,c,d,t=1;
    while(scanf("%lld %lld %lld %lld",&a,&b,&c,&d)==4){
        if(a<0){
            break;
        }
        while(a>0 || b>0 || c>0){
            a-=23;
            b-=28;
            c-=33;
        }
        while(a!=b || b!=c || a<=d){
            if(a<=b && a<=c){
                a+=23;
            }
            else if(b<=a && b<=c){
                b+=28;
            }
            else{
                c+=33;
            }
        }
        printf("Case %lld: the next triple peak occurs in %lld days.\n",t++,a-d);
    }
    return 0;
}
