#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t,T,i,j,k,n,poor,own,relative,x,total;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&k,&x);
        printf("Case %lld:\n",t);
        if(k==0){
            poor=x/3;
            x=x-poor;
            own=x/3;
            relative=x-own;
            printf("%lld\n",poor);
            printf("%lld\n",relative);
            printf("%lld\n",own);
        }
        else{
            total=(x*9)/2;
            poor=total/3;
            relative=x*2;
            printf("%lld\n",poor);
            printf("%lld\n",relative);
            printf("%lld\n",total);
        }
    }

    return 0;
}
