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
ll arr[109];
char str[maax];

int main(){ //freopen("11956 output","w",stdout);
    ll T,t,i,j,n,pos;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(str);
        ll ln=strlen(str);
        pos=0;
        memset(arr,0,sizeof arr);
        for(i=0;i<ln;i++){
            if(str[i]=='>'){
                pos++;
                if(pos>99)
                    pos=0;
            }
            else if(str[i]=='<'){
                pos--;
                if(pos<0)
                    pos=99;
            }
            else if(str[i]=='+'){
                arr[pos]++;
                if(arr[pos]>255)
                    arr[pos]=0;
            }
            else if(str[i]=='-'){
                arr[pos]--;
                if(arr[pos]<0)
                    arr[pos]=255;
            }
        }
        printf("Case %lld: ",t);
        for(i=0;i<100;i++){
            if(i==99){
                printf("%02X\n",arr[i]);
            }
            else
                printf("%02X ",arr[i]);
        }
    }
    return 0;
}








