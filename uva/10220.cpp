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
#define maax 100000
ll digit[maax];

int main(){
    ll n,i,j,k,m,p;
    while(scanf("%lld",&n)==1){
        digit[0]=1;
        m=1;
        ll hand=0;
        for(i=1;i<=n;i++){
            for(j=0;j<m;j++){
                ll x=digit[j]*i+hand;
                digit[j]=x%10;
                hand=x/10;
            }
            while(hand>0){
                digit[m]=hand%10;
                hand=hand/10;
                m++;
            }
        }
        p=0;
        for(i=m-1;i>=0;i--){
            p+=digit[i];
        }
        printf("%lld\n",p);
    }
    return 0;
}
