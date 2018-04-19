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
#define maax 1000000
bool tag[maax];
map<ll,int>M;

void generator(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i=i+2){
        tag[i]=1;
    }
    ll root=ceil(sqrt(maax))+1;
    for(ll i=3;i<root;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=j+i+i){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            M[i]=1;
        }
    }
}

int main(){
    generator();
    ll l,r,i,j,k,cnt,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&l,&r);
        bool f=0;
        for(i=l;i<=r;i++){
            ll root=sqrt(i); //cout<<"root:"<<root<<endl;
            cnt=0;
            for(j=1;j<=root;j++){
                if(i%j==0){
                    cnt+=2;
                }
                if(j*j==i){
                    cnt--;
                }
            } //cout<<"i:"<<i<<" cnt:"<<cnt<<endl;
            if(f==0){
                if(M[cnt]==1){
                    printf("%lld",i);
                    f=1;
                }
            }
            else{
                if(M[cnt]==1){
                    printf(" %lld",i);
                }
            }
        }
        if(f==0)
            printf("-1");
        printf("\n");
    }
    return 0;
}

