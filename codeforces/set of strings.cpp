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
string s;
map<char,ll>M;

int main(){
    ll n,i,j,k,ln;
    cin>>n;
    cin>>s;
    ln=s.size();
    for(i=0;i<ln;i++){ //cout<<M[s[i]]<<endl;
        if(M[s[i]]==0){
            M[s[i]]=1;
        }
    } //cout<<M.size();
    if(n>M.size())
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        M.clear();
        ll cnt=0;
        for(i=0;i<ln;i++){
            if(cnt==n){
                break;
            }
            if(M[s[i]]==0){
                M[s[i]]=1;
                if(i!=0)
                    cout<<"\n";
                cout<<s[i];
                cnt++;
            }
            else{
                cout<<s[i];
            }
        }
        if(i<ln){
            for(;i<ln;i++)
                cout<<s[i];
        }
    }
    return 0;
}
