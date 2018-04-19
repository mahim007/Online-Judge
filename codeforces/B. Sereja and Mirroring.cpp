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
#define mxn 1009
#define pi acos(-1.0)
#define inf 1e15

ll a[mxn][mxn];

int main(){
    ios_base::sync_with_stdio(0);
    ll n,m,i,j,k,ans;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }

    if(n%2){
        pfl(n);
        pf("\n");
        return 0;
    }

    ans=n;
    k=n;
    while(k%2==0){
        for(i=1;i<=k/2;i++){
            for(j=1;j<=m;j++){
                if(a[i][j]!=a[k-i+1][j]){
                    cout<<k<<"\n";
                    return 0;
                }
            }
        }

        k=k/2;
    }

    cout<<k<<"\n";
    return 0;
}
