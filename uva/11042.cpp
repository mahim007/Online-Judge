#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,T,a,b;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&b);
        if(b==0){
            printf("1\n");
        }
        else if(a==0){
            printf("2\n");
        }
        else if(a==b || a==-b){
            printf("4\n");
        }
        else{
            printf("TOO COMPLICATED\n");
        }
    }
    return 0;
}
