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
#define maax 100

struct node{
    ll serial;
    double price;
    ll point;
    string name;
    bool operator < (const node& p) const{
        if(point!=p.point)
            return point>p.point;
        else if(price!=p.price)
            return price<p.price;
        else
            return serial<p.serial;
    }
};
vector<node>V;
map<string,ll>M;
int main(){
    ll t=1,i,j,k,u,v,w,n,q;
    char str[maax];
    string s;
    while(scanf("%lld %lld",&n,&q)==2){
        if(n==0 && q==0){
            break;
        }
        getchar();
        for(i=1;i<=n;i++){
            gets(str);
            s=str;
            if(M[s]==0){
                M[s]=1;
            }
        }
        for(i=1;i<=q;i++){
            gets(str);
            double p;
            ll x;
            scanf("%lf %lld",&p,&x);getchar();
            node nd;
            nd.serial=i;
            nd.name=str;
            nd.price=p;
            nd.point=x;
            for(j=1;j<=x;j++){
                gets(str);
            }
            V.push_back(nd);
        }
        sort(V.begin(),V.end()); //for(ll z=0;z<V.size();z++) cout<<V[z].name<<" "<<V[z].point<<" "<<V[z].price<<" "<<V[z].serial<<endl;
        if(t!=1){
            printf("\n");
        }
        printf("RFP #%lld\n",t++);
        cout<<V[0].name<<endl;
        V.clear();
        M.clear();
    }
    return 0;
}








