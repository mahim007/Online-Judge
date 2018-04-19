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

int main(){
    string t="CODEFORCES";
    string s;
    ll ln,i,j,x,y;
    cin>>s;
    x=y=0;
    for(x=0;s[x]==t[x];x++);
    i=s.size()-1;
    j=9;
    for(;s[i]==t[j];i--,j--,y++);
    if(x+y>=10)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}







