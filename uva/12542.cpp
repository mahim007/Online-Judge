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
#define maax 100009
bool tag[maax];
map<ll,int>M;

int main(){ //freopen("12542 output","w",stdout);
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i=i+2){
        tag[i]=1;
    }
    for(ll i=3;i*i<maax;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=i+i+j){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            M[i]=1;
        }
    }
    char s[300];
    ll T,t,i,j,k,ln,mx,num;
    while(scanf("%s",s)==1){
        if(!strcmp(s,"0")){
            break;
        }
        ln=strlen(s);
        string p;
        mx=-1;
        for(i=0;i<ln;i++){
            num=0;
            for(j=i;j<ln;j++){
                num=num*10+s[j]-'0';
                if(num>100000){
                    break;
                }
                if(M[num]==1){
                    if(num>mx){
                        mx=num;
                    }
                }
            }
        }
        printf("%lld\n",mx);
    }
    return 0;
}



