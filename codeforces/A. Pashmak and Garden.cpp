#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll x1,y1,x2,y2;
    scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
    if(x1==x2 || y1==y2){
        if(x1==x2){
            ll a=abs(y1-y2);
            printf("%lld %lld %lld %lld\n",x1+a,y1,x2+a,y2);
        }
        else if(y1==y2){
            ll a=abs(x1-x2);
            printf("%lld %lld %lld %lld\n",x1,y1+a,x2,y2+a);
        }
    }
    else if(abs(x1-x2)==abs(y1-y2)){
        printf("%lld %lld %lld %lld\n",x1,y2,x2,y1);
    }
    else printf("-1\n");
    return 0;
}
