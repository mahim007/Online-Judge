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

int main(){
    ll n,k,p,x,y,i,j,mid,low=0,high=0,sum=0;
    cin>>n>>k>>p>>x>>y;
    rep(i,k){
        scl(arr[i]);
        sum+=arr[i];
        if(arr[i]<y)
            low++;
        else
            high++;
    }

    if(low>(n-1)/2){
        printf("-1\n");
        return 0;
    }
    for(i=k+1;i<=n;i++){
        if(low<(n-1)/2){
            low++;
            arr[i]=1;
            sum+=arr[i];
        }
        else{
            high++;
            arr[i]=y;
            sum+=arr[i];
        }
    }
    if(sum>x){
        printf("-1\n");
        return 0;
    }
    else{
        for(i=k+1;i<=n;i++){
            printf("%lld ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
