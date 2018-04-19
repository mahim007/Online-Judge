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
#define maax 209
int main(){
    ll r,c,n,T,t,ans;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&r,&c);
        if(r==1){
            ans=c;
        }
        else if(c==1){
            ans=r;
        }
        else if(r==2){
            ans=(c/4)*4;
            if(c%4==1)
                ans+=2;
            else if(c%4>1)
                ans+=4;
        }
        else if(c==2){
            ans=(r/4)*4;
            if(r%4==1)
                ans+=2;
            else if(r%4>1)
                ans+=4;
        }
        else
            ans=(r*c+1)/2;
        printf("Case %lld: %lld\n",t,ans);
    }
    return 0;
}
