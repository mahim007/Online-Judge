#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <sstream>
using namespace std;

#define ll long long int
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 1009

void draw(ll amp){
    ll i,j;
    for(i=1;i<=amp;i++){
        for(j=1;j<=i;j++){
            printf("%lld",i);
        }
        printf("\n");
    }
    for(i=amp-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%lld",i);
        }
        printf("\n");
    }
}

int main(){ //freopen("488 output","w",stdout);
    ll T,t,i,j,k,amplitude,frequency;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&amplitude,&frequency);
        if(t!=1)
            printf("\n");
        for(i=1;i<=frequency;i++){
            draw(amplitude);
            if(i!=frequency)
                printf("\n");
        }
    }
    return 0;
}











