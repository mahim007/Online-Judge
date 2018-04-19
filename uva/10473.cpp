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
char str[maax];
char num[maax];
ll ln,N;

void getdecimal(){
    ll val,i,j,d,pw;
    ll l=strlen(num);
    char ch;
    val=0;
    d=0;
    pw=0;
    for(i=l-1;i>=0;i--){
        ch=num[i];
        if(isalpha(ch)){
            d=ch-55;
        }
        else{
            d=ch-'0';
        }
        val+=d*(ll)pow(16,pw);
        pw++;
    }
    printf("%lld\n",val);
}

void gethexa(){
    string s;
    ll i,j=0;
    char ch;
    while(N>0){
        ll r=N%16; //cout<<"r:"<<r<<endl;
        N=N/16; //cout<<"N:"<<N<<endl;
        if(r>=10){
            ch=r+55;
        }
        else{
            ch=r+'0';
        }
        s+=ch;
    }
    if(s.size()==0){
        s="0";
    }
    reverse(s.begin(),s.end());
    printf("0x");
    cout<<s<<endl;

}

int main(){
    ll T,t,i,j,k;
    while(scanf("%s",str)==1){
        ln=strlen(str);
        if(str[0]=='-')
            break;
        if(ln>2 && str[0]=='0' && str[1]=='x'){
            memset(num,'\0',sizeof num);
            j=0;
            for(i=2;i<ln;i++){
                num[j++]=str[i];
            }
            num[j]='\0';
            getdecimal();
        }
        else{
            N=atoll(str); //cout<<"N:"<<N<<endl;
            gethexa();
        }

    }
    return 0;
}
