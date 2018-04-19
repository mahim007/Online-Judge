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
#define maax 200
char y[maax];
char p[maax],q[maax],x[maax];

ll conversion(ll n){
    ll i=0,j=0;
    ll ln=strlen(p);
    ll hand=0;
    ll r1=0,r2=0,r=0;
    memset(x,0,sizeof x);
    for(i=ln-1;i>=0;i--){
        if(p[i]>='0' && p[i]<='9'){
            r1=(p[i]-'0'); //cout<<"r:"<<r<<endl;
            //hand=((p[i]-'0')+(q[i]-'0')+hand)/n;cout<<"hand:"<<hand<<endl;
        }
        else{
            r1=(p[i]-55);
        }
        if(q[i]>='0' && q[i]<='9'){
            r2=(q[i]-'0');
            //cout<<"hand:"<<hand<<endl;
        }
        else{
            r2=(q[i]-55);
        }
        r=(r1+r2+hand)%n;
        hand=(r1+r2+hand)/n;
        if(r>=10){
            x[j++]=55+r;
        }
        else{
            x[j++]=r+'0';
        }
    }//cout<<"at last hand:"<<hand<<endl;
    if(hand!=0)
        x[j]=hand+'0';j++;
    x[j]='\0';
    reverse(x,x+strlen(x));
    //cout<<"sum:"<<x<<endl;
}

bool ispalindrome(){
    ll l=strlen(x);
    int i,j;
    for(i=0,j=l-1;i<=l/2;i++,j--){
        if(x[i]!=x[j])
            return false;
    }
    return true;
}

int main(){
    ll t,i,j,k,ln,T,cnt;
    bool f;
    while(gets(y)){
        if(!strcmp(y,"0")){
            printf("0 0 0 0 0 0 0 0 0 0 0 0 0 0\n");
            continue;
        }
        for(i=15;i>=2;i--){
            strcpy(x,y); //cout<<x<<endl;
            f=true;
            ln=strlen(x);
            for(j=0;j<ln;j++){
                if((isalpha(x[j]) && x[j]-55>=i)||(isdigit(x[j]) && x[j]-'0'>=i)){
                    f=false;
                    break;
                }
            } //cout<<"base "<<i<<endl;
            if(i!=15)
                printf(" ");
            if(f==false){
                printf("?");
                continue;
            }
            else{
                cnt=0;
                while(cnt<101){
                bool pal=0;
                pal=ispalindrome();
                if(pal==true){
                    break;
                }
                strcpy(p,x);
                strcpy(q,x);
                reverse(q,q+strlen(q)); //cout<<"p:"<<p<<" q:"<<q<<endl;
                conversion(i);
                cnt++;
                }
                printf("%lld",cnt);
            }
        }
        printf("\n");
    }
    return 0;
}


