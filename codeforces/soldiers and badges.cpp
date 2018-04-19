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
map<ll,int>M;

int main(){
    ll n,i,j,sum,ans,d,x,cnt=0;;
    cin>>n;
    //d=n*(n+1)/2;
    sum=0;
    for( i=1;i<=n;i++){
        cin>>x;
        d=x;
        if(M[x]==0){
            M[x]=1;
        }
        else{
            while(M[d]!=0){
                d++;
            } //cout<<"d:"<<d<<" d-x"<<d-x<<endl;
            M[d]=1;
        }
        cnt+=d-x;
    }
    cout<<cnt<<endl;
}
