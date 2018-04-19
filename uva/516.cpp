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
#define maax 33000
bool tag[maax];
vector<ll>V;
ll x;
char str[maax];

void generateprime(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i=i+2){
        tag[i]=1;
    }
    for(ll i=3;i*i<maax;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=j+i+i){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
}

void factorise(){
    ll factor[maax];
    ll power[maax];
    memset(factor,0,sizeof factor);
    memset(power,0,sizeof power);
    ll cnt=0;
    ll i=0;
    for(i=0;V[i]*V[i]<=x;i++){
        if(x%V[i]==0){
            factor[cnt]=V[i];
            while(x%V[i]==0){
                power[cnt]++;
                x=x/V[i];
            }
            cnt++;
        }
    }
    if(x!=1){
        factor[cnt]=x;
        power[cnt]=1;
        cnt++;
    }
    bool f=0;
    for(ll i=cnt-1;i>=0;i--){
        if(f==0){
            printf("%lld %lld",factor[i],power[i]);
        }
        else{
            printf(" %lld %lld",factor[i],power[i]);
        }
        f=1;
    }
    printf("\n");
}

int main(){
    generateprime();
    string s;
    ll b,p;
    while(getline(cin,s)){
        if(s=="0")
            break;
        istringstream pp(s); //cout<<pp<<endl;
        x=1;
        while(pp>>b){
            pp>>p; //cout<<b<<" "<<p<<endl;
            x*=(ll)ceil(pow(b,p));
        } //cout<<x<<endl;
        x--;
        factorise();
    }
    return 0;
}









