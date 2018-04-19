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
int main(){
    ll n,L,i,j,mid,flag;
    cin>>n>>L;
    ll cnt=0;
    mid=n/2+1;
    if(n%2==0){
        if(L>n*n/2){
            printf("NO\n");
            return 0;
        }
        else
            printf("YES\n");
    }
    else{
        if(L>(n*n+1)/2){
            printf("NO\n");
            return 0;
        }
        else{
            printf("YES\n");
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(cnt==L){
                printf("S");
            }
            else{
                if(i%2==0){
                    if(j%2)
                        printf("S");
                    else{
                        printf("L");
                        cnt++;
                    }
                }
                else{
                    if(j%2){
                        printf("L");
                        cnt++;
                    }
                    else
                        printf("S");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

