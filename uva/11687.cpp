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

int main(){
    ll n,i,ln,ans;
    while(gets(str)){
        if(!strcmp(str,"END"))
            break;
        ans=0;
        //ln=strlen(str);
        while(1){
            ans++;
            if(!strcmp(str,"1"))
                break;
            ln=strlen(str); //cout<<"ln:"<<ln<<endl;
            sprintf(str,"%lld",ln); //cout<<"str:"<<str<<endl;
        }
        printf("%lld\n",ans);
    }
    return 0;
}













