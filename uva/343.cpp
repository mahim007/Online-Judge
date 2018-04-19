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

char str[maax],a[maax],b[maax];
ll ln;

void getnumbers(){
    ll i,j,k,flag;
    flag=0;
    i=0;j=0;k=0;
    for(i=0;i<ln;i++){
        if(str[i]==' '){
            if(flag==0){
                continue;
            }
            if(flag==1){
                flag=2;
                continue;
            }
            if(flag==3){
                break;
            }
        }
        else{
            if(flag==0 || flag==1){
                flag=1;
                a[j++]=str[i];
            }
            if(flag==2 || flag==3){
                b[k++]=str[i];
            }
        }
    }
    a[j]='\0';
    b[k]='\0';
    //cout<<a<<" "<<b<<endl;
}

ll getbase(ll p){
    char s[maax];
    if(p==1){
        strcpy(s,a);
    }
    else{
        strcpy(s,b);
    }
    ll l=strlen(s);
    ll b=0;
    ll val;
    for(int i=0;i<l;i++){
        char ch=s[i];
        if(isalpha(s[i])){
            val=s[i]-55;
        }
        else{
            val=s[i]-'0';
        }
        if(val>b)
            b=val;
    }
    b++;
    if(b<2)
        b=2;
    return b;
}

ll getval(ll p,ll base){
    char s[maax];
    if(p==1){
        strcpy(s,a);
    }
    else{
        strcpy(s,b);
    }
    ll l=strlen(s);
    ll val=0,d;
    ll i,pw=0;
    char ch; //cout<<"extracting...\n";
    for(i=l-1;i>=0;i--){
        ch=s[i];
        if(isalpha(ch)){
            d=ch-55; //cout<<"d:"<<d<<endl;
            val+=d*(ll)pow(base,pw); //cout<<"val:"<<val<<endl;
        }
        else{
            d=ch-'0'; //cout<<"d:"<<d<<endl;
            val+=d*(ll)pow(base,pw); //cout<<"val:"<<val<<endl;
        }
        pw++;
    }
    return val;
}

int main(){
    ll T,i,j,k,base1,base2,ln1,ln2,flag,val1,val2;
    while(gets(str)){
        ln=strlen(str);
        getnumbers();
        base1=getbase(1); //cout<<"base1:"<<base1<<endl;
        base2=getbase(2); //cout<<"base2:"<<base2<<endl;
        flag=0;
        for(i=base1;i<=36;i++){
            val1=getval(1,i); //cout<<"base1:"<<i<<" val1:"<<val1<<" num1:"<<a<<endl;
            for(j=base2;j<=36;j++){
                val2=getval(2,j); //cout<<"base2:"<<j<<" val2:"<<val2<<" num2:"<<b<<endl; //system("pause");
                if(val1==val2){
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1){
            printf("%s (base %lld) = %s (base %lld)\n",a,i,b,j);
        }
        else{
            printf("%s is not equal to %s in any base 2..36\n",a,b);
        }
    }
    return 0;
}
