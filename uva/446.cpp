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

char a[maax],b[maax];
char bin[maax];
char ans[14];
ll ln;

ll getdecimal(ll p){
    char s[maax];
    if(p==1){
        strcpy(s,a);
    }
    else{
        strcpy(s,b);
    }
    ll val=0;
    ll i=0;
    ll pw=0;
    ll ln=strlen(s);
    char ch;
    ll d;
    for(i=ln-1;i>=0;i--){
        ch=s[i];
        if(isalpha(s[i])){
            d=ch-55;
        }
        else{
            d=ch-'0';
        }
        val+=d*(ll)pow(16,pw);
        pw++;
    }
    return val;
}

void getbinary(ll n){
    memset(ans,'0',sizeof ans);
    ll i=0;
    while(n>0){
        ll r=n%2;
        n=n/2;
        ans[i++]=r+'0';
    }
    if(strlen(ans)==0){
        ans[0]='0';
    }
    reverse(ans,ans+13);
    //a[13]='\0';
    for(i=0;i<13;i++){
        printf("%c",ans[i]);
    }
    //printf("%013s ",a);
}

int main(){ //freopen("446 output","w",stdout);
    ll T,t,i,j,k;
    char ch;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        scanf("%s %c %s",a,&ch,b); //cout<<a<<" "<<ch<<" "<<b<<endl;
        ll n1=getdecimal(1);
        ll n2=getdecimal(2);
        ll res;
        if(ch=='+'){
            res=n1+n2;
        }
        else{
            res=n1-n2;
        }
        getbinary(n1);
        printf(" %c ",ch);
        getbinary(n2);
        printf(" = ");
        printf("%lld\n",res);
    }
    return 0;
}
















