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
string s,t;
int main(){
    ll n;
    cin>>n;
    cin>>s;
    cin>>t;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll a=abs((t[i]-'0')-(s[i]-'0'));
        ll b;
        if(s[i]>t[i]){
            b=abs(('9'-'0')-(s[i]-'0'))+(t[i]-'0'+1);
        }
        else{
            b=(s[i]-'0')+abs(('9'-'0')-(t[i]-'0'))+1;
        }
        ans+=min(a,b);
    }
    cout<<ans<<endl;
}
