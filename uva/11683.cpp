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
#define maax 10009
ll arr[maax];

int main(){ //freopen("11683 output","w",stdout);
    ll i,j,a,c,ans,stp,cur;
    while(scanf("%lld %lld",&a,&c)==2){
        if(a==0 && c==0)
            break;
        for(i=0;i<c;i++){
            scanf("%lld",&arr[i]);
        }
        for(i=0;i<c;i++){
            if(i==0){
                ans=a-arr[i];
                cur=arr[i];
            }
            else{
                if(cur>arr[i]){
                    ans+=cur-arr[i];
                }
            }
            cur=arr[i];
        }
        printf("%lld\n",ans);
    }
    return 0;
}







