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
int main(){
    ll T,t,i,j,n,s,x,y;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&s);
        n=ceil(sqrt((double)s));
        if(n*n-s<n){
            x=n;
            y=n*n-s+1;
        }
        else{
            x=-n*n+2*n+s-1;
            y=n;
        }
        if(n&1){
            swap(x,y);
        }
        printf("Case %lld: %lld %lld\n",t,x,y);
    }
    return 0;
}


















