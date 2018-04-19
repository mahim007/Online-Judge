#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,c,d,l,i,n,cnt;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l)==5){
        if(a==0 && b==0 && c==0 && d==0 && l==0){
            break;
        }
        cnt=0;
        for(i=0;i<=l;i++){
            ll sum=a*i*i+b*i+c; //printf("i=%lld sum=%lld\n",i,sum);
            if(sum%d==0){
                cnt++;
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
