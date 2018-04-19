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

#define sc scanf
#define pf printf
#define ll long long int
#define ini(n) scanf("%d",&n)
#define inl(n) scanf("%lld",&n)
#define ind(n) scanf("%lf",&n)
#define inc(n) scanf("%c",&ch)
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,a,n) for(i=a;i<=n;i++)
#define rep0(i,a,n) for(i=a;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define mxn 100009
ll a[mxn];
vector<ll>V;

int main(){
    ll n,c=0,i,j,k,d,ans=0;
    inl(n);
    rep0(i,0,n){
        inl(a[i]);
        V.push_back(a[i]);
    }

    rep0(i,0,n-1){
        if(V[i]<=V[i+1]) c++;
    }
    if(V[n-1]<=V[0]) c++;
    if(c>=n-1){
        sort(V.begin(),V.end());
//        rep0(i,0,n){
//            if(a[i]!=V[i]) ans++;
//        }

        ll mn=V[0];
        ll pos=-1;
        if(a[0]==mn){
            for(i=n-1;i>=0;i--){
                if(a[i]==mn){
                    pos=i;
                }
                else break;
            }
            if(pos!=0 && pos!=-1)
                ans=n-pos;
            else ans=0;
        }
        else{
            rep0(i,0,n){
                if(a[i]==mn){
                    pos=i;
                    break;
                }
            }

            ans=n-pos;
        }

        pfl(ans);
        pf("\n");
    }
    else{
        pfl(-1ll);
        pf("\n");
        //pf("-1\n");
    }

    return 0;
}
