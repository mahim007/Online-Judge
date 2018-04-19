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
    double angel,hr,mnt,i,j,n;
    while(scanf("%lf:%lf",&hr,&mnt)==2){
        if(hr==0 && mnt==0)
            break;
        if(hr==12)
            hr=0;
        hr*=5;
        hr+=mnt/12.0;
        double dist=0;
        dist=fabs(hr-mnt);
        angel=dist*6.0;
        if(angel>180)
            angel=360.0-angel;
        printf("%0.3lf\n",angel);
    }
    return 0;
}
