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
#define maax 100009
ll b,p,m;

int main(){ //freopen("1230 output","w",stdout);
    ll T,t,res,x;
    while(scanf("%lld",&T)==1){
        if(T==0){
            break;
        }
        for(t=1;t<=T;t++){
            scanf("%lld %lld %lld",&b,&p,&m);
            if(m==1){
                printf("0\n");
                continue;
            }
            res=1;
            x=b;
            while(p){
                if(p%2==1){
                    res=((res%m)*(x%m))%m;
                }
                x=((x%m)*(x%m))%m;
                p=p/2;
            }
            printf("%lld\n",res);
        }
    }
    return 0;
}
