#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main(){
    ll a,b,n,flag=0;
    scanf("%llu %llu %llu",&a,&b,&n);
    if(a>b) swap(a,b);
    if(1>=a && 1<=b){
        printf("1 ");
        flag=1;
    }
    ll ans=1;
    while(1){
        ans*=n;
        if(ans>=a && ans<=b){
            printf("%llu ",ans);
            flag=1;
        }
        if(ans>b)
            break;
    }
    if(flag==0)
        printf("-1");
    printf("\n");
    return 0;
}
