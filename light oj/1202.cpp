#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,T,x1,x2,y1,y2,x,y;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        x=abs(x1-x2);
        y=abs(y1-y2);
        printf("Case %lld: ",t);
        if(x==y){
            printf("1\n");
        }
        else if((x&1)==(y&1)){
            printf("2\n");
        }
        else{
            printf("impossible\n");
        }
    }
    return 0;
}
