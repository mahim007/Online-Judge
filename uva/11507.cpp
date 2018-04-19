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
map<string,map<string,string> >M;

int main(){ //freopen("11507 output","w",stdout);
    M["+x"]["+y"]="+y";
    M["+x"]["-y"]="-y";
    M["+x"]["+z"]="+z";
    M["+x"]["-z"]="-z";
    M["-x"]["+y"]="-y";
    M["-x"]["-y"]="+y";
    M["-x"]["+z"]="-z";
    M["-x"]["-z"]="+z";
    M["+y"]["+y"]="-x";
    M["+y"]["-y"]="+x";
    M["+y"]["+z"]="+y";
    M["+y"]["-z"]="+y";
    M["-y"]["+y"]="+x";
    M["-y"]["-y"]="-x";
    M["-y"]["+z"]="-y";
    M["-y"]["-z"]="-y";
    M["+z"]["+y"]="+z";
    M["+z"]["-y"]="+z";
    M["+z"]["+z"]="-x";
    M["+z"]["-z"]="+x";
    M["-z"]["+y"]="-z";
    M["-z"]["-y"]="-z";
    M["-z"]["+z"]="+x";
    M["-z"]["-z"]="-x";

    ll T,t,i,n;
    string p,q;
    while(scanf("%lld",&n)==1){
        if(n==0)
            break;
        p="+x";
        for(i=1;i<n;i++){
            cin>>q;
            if(q!="No")
                p=M[p][q];
        }
        cout<<p<<endl;
    }
    return 0;
}
















