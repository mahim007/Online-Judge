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
#define maax 50
char a[maax],b[maax];
ll ln;

ll getdecimal(ll p){
    char m[maax];
    if(p==1){
        strcpy(m,a);
    }
    else{
        strcpy(m,b);
    }
    ll val,i,j,d,pw;
    ll l=strlen(m);
    char ch;
    val=0;
    d=0;
    pw=0;
    for(i=l-1;i>=0;i--){
        ch=m[i];
        if(isalpha(ch)){
            d=ch-55;
        }
        else{
            d=ch-'0';
        }
        val+=d*(ll)pow(2,pw);
        pw++;
    }
    //printf("%lld\n",val);
    return val;
}

int main(){
    ll T,t,i,j,k;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(a);
        gets(b);

        ll num1=0,num2=0;
        ll ln=strlen(a);
        num1=getdecimal(1); //cout<<num1<<endl;
        num2=getdecimal(2); //cout<<num2<<endl;
        if(__gcd(num1,num2)!=1){
            printf("Pair #%lld: All you need is love!\n",t);
        }
        else{
            printf("Pair #%lld: Love is not all you need!\n",t);
        }
    }
    return 0;
}











