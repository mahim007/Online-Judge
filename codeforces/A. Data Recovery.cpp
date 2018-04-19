#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109
ll a[mxn];

int main(){
    ll n,m,mnt,mxt,i,d,f=1;
    scanf("%lld %lld %lld %lld",&n,&m,&mnt,&mxt);
    for(i=1;i<=m;i++){
        scanf("%lld",&d);
        a[d]=1;
        if(d<mnt || d>mxt) f=0;
    }

    if(f==0){
        printf("Incorrect\n");
        return 0;
    }
    if((n-m)>=(!a[mnt]+!a[mxt])){
        printf("Correct\n");
    }
    else{
        printf("Incorrect\n");
    }

    return 0;
}
