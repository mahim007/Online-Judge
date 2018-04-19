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
ll arr[maax];
ll dp[maax];
ll n;

ll lis(ll u){
    if(dp[u]!=-1){
        return dp[u];
    }
    ll mx=0;
    for(ll v=u+1;v<=n;v++){
        if(arr[v]>arr[u]){
            ll lisv=lis(v);
            if(lisv>mx){
                mx=lisv;
            }
        }
    }
    dp[u]=1+mx;
    return dp[u];
}

int main(){
    ll i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll LIS=0;
    ll start=0;
    memset(dp,-1,sizeof dp);
    for(i=1;i<=n;i++){
        printf("longest path from: %lld\n",lis(i));
        if(lis(i)>LIS){
            LIS=lis(i);
            start=i;
        }
    }
    printf("LIS=%lld starting point %lld\n",LIS,start);
    return 0;
}
