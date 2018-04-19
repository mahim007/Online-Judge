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
#define maax 20
char s[maax];
ll m=100000;
int main(){
    ll n,i,res;
    while(scanf("%lld",&n)==1){
        res=1;
        for(i=1;i<=n;i++){
            //res=((i%m)*(res%m))%m;
            res=(i*res);
            while(res%10==0 && res!=0){
                res=res/10;
            }
            res=res%m;
        }
        printf("%5lld -> %d\n",n,(int)res%10);
    }
    return 0;
}












