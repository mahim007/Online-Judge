#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll digit[10];
int main(){
    ll n,i,m,p,cnt;
    while(scanf("%lld %lld",&n,&m)==2){
        if(n>m){
            swap(n,m);
        }
        cnt=0;
        for(i=n;i<=m;i++){
            memset(digit,0,sizeof digit);
            p=i;
            ll flag=1;
            while(p){
                ll r=p%10;
                digit[r]++;
                if(digit[r]>1){
                    flag=0;
                    break;
                }
                p=p/10;

            }
            if(flag!=0){
                cnt++;
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
