#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
#define ll long long int
int main(){
    ll T,t,i,j,k,n,cnt;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        i=j=k=1;
        cnt=0;
        for(i=1;i<=n/3;i++){
            for(j=i;j<=n/2;j++){
                for(k=j;i+j+k<=n;k++){
                    if((i+j+k==n) && ((i+j>=k) && (i+k>=j) && (j+k>=i))){
                        cnt++;
                    }
                }
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
