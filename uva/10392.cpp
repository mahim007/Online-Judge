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
#define maax 1000000
bool tag[maax];
vector<ll>V;

void generator(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i=i+2){
        tag[i]=1;
    }
    ll root=floor(sqrt(maax))+1;
    for(ll i=3;i<root;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=j+i+i){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
}


int main(){
    generator();
    ll n,i,j,k;
    while(scanf("%lld",&n)==1){
        if(n<0){
            break;
        }
        ll sz=V.size();
        ll root=floor(sqrt(n))+1;
        for(i=0;V[i]<=root && i<sz;i++){
            if(n%V[i]==0){
                while(n%V[i]==0){
                    printf("    %lld\n",V[i]);
                    n=n/V[i];
                }
            }
        }
        if(n!=1){
            printf("    %lld\n",n);
        }
        printf("\n");
    }
    return 0;
}
