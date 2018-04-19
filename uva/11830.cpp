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
#define maax 10000

char s[maax];
int main(){
    ll n;
    bool flag;
    while(scanf("%lld %s",&n,s)==2){
        if(n==0 && !strcmp(s,"0"))
            break;
        flag=0;
        ll ln=strlen(s);
        for(ll i=0;i<ln;i++){
            if((s[i]-'0')!=n){
                if(s[i]=='0' && flag==0)
                    continue;
                else{
                    flag=1;
                    printf("%c",s[i]);
                }
            }
        }
        if(flag==0){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}





