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
char str[maax];
ll sum[maax];

int main(){
    ll T,t=1,i,j,ln,mn,mx,x,y,q;
    while(gets(str)){
        ln=strlen(str);
        if(ln==0){
            break;
        }
        sum[0]=str[0]-'0';
        for(i=1;i<ln;i++){
            sum[i]=(str[i]-'0')+sum[i-1];
        }
        scanf("%lld",&q);
        printf("Case %lld:\n",t++);
        for(i=1;i<=q;i++){
            scanf("%lld %lld",&x,&y);
            mn=min(x,y);
            mx=max(x,y);
            if(str[mn]!=str[mx]){
                printf("No\n");
            }
            else{
                if(str[mn]=='0'){
                    if(sum[mn]==sum[mx])
                        printf("Yes\n");
                    else
                        printf("No\n");
                }
                else{
                    if((sum[mx]-sum[mn]+1)==mx-mn+1)
                        printf("Yes\n");
                    else
                        printf("No\n");
                }
            }
        }
        memset(sum,0,sizeof sum);
        getchar();
    }
    return 0;
}








