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
#define maax 25
ll device[maax];
bool toogle[maax];

int main(){
    ll t=1,n,m,c,i,sum=0,j,flag,mx;
    while(scanf("%lld %lld %lld",&n,&m,&c)==3){
        if(n==0 && m==0 && c==0)
            break;
        mx=-1;
        memset(device,0,sizeof device);
        memset(toogle,0,sizeof toogle);
        for(i=1;i<=n;i++){
            scanf("%lld",&device[i]);
        }
        flag=1;
        sum=0;
        printf("Sequence %lld\n",t++);
        for(i=1;i<=m;i++){
            scanf("%lld",&j);
            if(toogle[j]==0){
                toogle[j]=1;
                sum+=device[j];
                if(sum>mx){
                    mx=sum;
                }
                if(sum>c){
                    flag=0;
                }
            }
            else{
                toogle[j]=0;
                sum-=device[j];
            }
        }
        if(flag==1){
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %lld amperes.\n",mx);
        }
        else
            printf("Fuse was blown.\n");
        printf("\n");
    }
    return 0;
}
