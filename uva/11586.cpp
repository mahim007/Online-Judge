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
#define maax 500
char str[maax];

int main(){
    ll T,t,i,j,ln,m,f;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(str);
        ln=strlen(str);
        m=f=0;
        for(i=0;i<ln;i++){
            if(str[i]=='M')
                m++;
            if(str[i]=='F')
                f++;
        }
        if(m==f && m>1 && f>1)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;
}



