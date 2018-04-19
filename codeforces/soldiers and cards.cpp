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
ll n,k1,k2;
vector<ll>p1,p2,r1,r2;

bool check(ll i){
    ll j=i,k=0;
    for(k=0;k<k1;k++,j++){
        if(p1[j]!=r1[k])
            return false;
    }
    j=i;
    for(k=0;k<k2;k++,j++){
        if(p2[j]!=r2[k])
            return false;
    }
    return true;
}
int main(){
    ll T,i,j,sz1,sz2,point1=0,point2=0;
    cin>>n;
    cin>>k1;
    for(i=1;i<=k1;i++){
        ll d;
        cin>>d;
        p1.push_back(d);
        r1.push_back(d);
    }
    cin>>k2;
    for(i=1;i<=k2;i++){
        ll d;
        cin>>d;
        p2.push_back(d);
        r2.push_back(d);
    }

    bool flag=false;
    for(i=0;i<p1.size() && i<p2.size();){
        cout<<"p1:"<<p1[i]<<" p2:"<<p2[i]<<endl;
        if(p1[i]>p2[i]){
            p1.push_back(p2[i]);
            p1.push_back(p1[i]);
            point1++;
        }
        else{
            p2.push_back(p1[i]);
            p2.push_back(p2[i]);
            point2++;
        }
        flag=check(i+1);
        if(flag==true){
            cout<<"-1\n";
            break;
        }
        p1.erase(p1.begin());
        p2.erase(p2.begin());
    system("pause");
    }
    if(flag==false){
        if(point1>point2){
            printf("%lld %d\n",point1+point2,1);
        }
        else{
            printf("%lld %d\n",point1+point2,2);
        }
    }
    return 0;
}











