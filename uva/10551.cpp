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
#define maax 1009

char p[maax];
char m[15];
ll ln,b;

ll getdecimal(){
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
        val+=d*(ll)pow(b,pw);
        pw++;
    }
    //printf("%lld\n",val);
    return val;
}

void decton(ll num){
    string p; //cout<<"num:"<<num<<endl;
    p+=(num%b)+'0'; //cout<<"p:"<<p<<endl;
    num/=b; //cout<<"num:"<<num<<endl;
    while(num>0){
        ll r=num%b;
        num=num/b;
        p+=r+'0';
    }
    reverse(p.begin(),p.end());
    cout<<p<<endl;
}

int main(){ //freopen("10551 output","w",stdout);
    ll T,t,i,j,k,n,r;
    while(scanf("%lld",&b)==1){
        if(b==0)
            break;
        scanf("%s",p);
        scanf("%s",m);
        if(b!=10){
            r=getdecimal();
        }
        else{
            r=atoll(m);
        }
        ll s=0;
        ll ln=strlen(p);
        i=0;
        for(i=0;i<ln;i++){
            s*=b;
            s+=p[i]-'0';
            s=s%r;
        }
        decton(s);
    }
    return 0;
}















