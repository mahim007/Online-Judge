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
#define maax 20

int main(){
    ll n,i,j,k,num,ln;
    vector<ll>V;
    char s[maax];
    gets(s);
    num=atoll(s);
    n=0;
    ln=strlen(s);
    while(num>0){
        n=0;
        ln=strlen(s);
        for(i=0;i<ln;i++){
            if(s[i]!='0'){
                n=n*10+1;
            }
            else{
                n=n*10+0;
            }
        } //cout<<"n:"<<n<<endl;
        V.push_back(n);
        num-=n;
        sprintf(s,"%lld",num);//cout<<"string s:"<<s<<endl;
    }
    ln=V.size();
    cout<<ln<<endl;
    for(i=0;i<ln;i++)
        cout<<V[i]<<" ";
    cout<<endl;
    return 0;
}










