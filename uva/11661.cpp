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
#define maax 2000009
char str[maax];
int main(){
    ll T,t,i,j,ln,mn,dis,n,rest,drg;
    while(scanf("%lld",&n)==1){
        getchar();
        if(n==0)
            break;
        gets(str);
        ln=n;
        rest=drg=-1;
        mn=99999999;
        for(i=0;i<ln;i++){
            if(str[i]=='R'){
                rest=i;
                if(drg!=-1){
                    dis=abs(rest-drg);
                    if(dis<mn){
                        mn=dis;
                    }
                }
            }
            else if(str[i]=='D'){
                drg=i;
                if(rest!=-1){
                    dis=abs(rest-drg);
                    if(dis<mn){
                        mn=dis;
                    }
                }
            }
            else if(str[i]=='Z'){
                mn=0;
            }
        }
        printf("%lld\n",mn);
    }
    return 0;
}
