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
#define maax 1000009
map<ll,int>M;

int main(){
    ll i,j,k,n,m,p,q,score,flag,crs,category;
    while(scanf("%lld",&crs)==1){
        if(crs==0)
            break;
        scanf("%lld",&category);
        for(i=1;i<=crs;i++){
            scanf("%lld",&n);
            if(M[n]==0)
                M[n]=1;
        }
        flag=1;
        for(i=1;i<=category;i++){
            p=0;
            scanf("%lld",&n);
            scanf("%lld",&score);
            for(j=1;j<=n;j++){
                scanf("%lld",&m);
                if(M[m]==1)
                    p++;
            }
            if(p<score){
                flag=0;
            }
        }
        if(flag==1)
            printf("yes\n");
        else
            printf("no\n");
        M.clear();
    }
    return 0;
}















