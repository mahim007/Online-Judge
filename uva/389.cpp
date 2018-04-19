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

ll ln,base10;
char str[maax];
char s[maax];

void getnumbers(){
    ll i,j,flag;
    i=0;
    j=0;
    flag=0;
    memset(s,'\0',sizeof s);
    for(i=0;i<ln;i++){
        if(str[i]==' '){
            continue;
        }
        if(str[i]=='0'){
            if(flag==0){
                continue;
            }
            else{
                s[j++]=str[i];
            }
        }
        else{
            s[j++]=str[i];
            flag=1;
        }
    }
    if(strlen(s)==0){
        s[0]='0';
    } //cout<<"s:"<<s<<endl;
}

ll to10base(ll base){
    ll i,k,val,pw,d;
    val=pw=0;
    k=strlen(s);
    char ch;
    for(i=k-1;i>=0;i--){
        ch=s[i];
        if(isalpha(ch)){
            d=ch-55;
        }
        else{
            d=ch-'0';
        }
        val+=d*(ll)pow(base,pw);
        pw++;
    } //cout<<"val:"<<val<<endl;
    return val;
}
void from10to(ll base){
    memset(s,'\0',sizeof s);
    ll n=base10;
    ll i,j;
    char ch;
    j=0;
    ll hand=0; //cout<<"extracting....\n";
    while(n>0){
        ll r=n%base; //cout<<"r:"<<r<<endl;
        n=n/base;
        //hand=(n+hand)/base;
        if(r>=10){
            ch=r+55;
        }
        else{
            ch=r+'0';
        }
        s[j++]=ch;
    } //cout<<"before reversing:"<<s<<endl;
    if(strlen(s)==0){
        s[0]='0';
    }
    reverse(s,s+strlen(s)); //cout<<"s:"<<s<<endl;
}

int main(){
    ll T,t,i,j,k,base1,base2,n;
    while(scanf("%s %lld %lld",str,&base1,&base2)==3){
        ln=strlen(str);
        getnumbers();
        if(base1!=10){
            base10=to10base(base1);
        }
        else{
            base10=atol(s); //cout<<"else base:"<<base10<<endl;
        }
        if(base2==10){
            if(base10<=9999999)
                printf("%7lld\n",base10);
            else{
                printf("  ERROR\n");
            }
        }
        else{
            from10to(base2);
            if(strlen(s)>7){
                printf("  ERROR\n");
            }
            else
                printf("%7s\n",s);
        }
    }
    return 0;
}
