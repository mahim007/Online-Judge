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
map<ll,string>M;
map<char,string>P;
int main(){
    M[0]="zero";
    M[1]="one";
    M[2]="two";
    M[3]="three";
    M[4]="four";
    M[5]="five";
    M[6]="six";
    M[7]="seven";
    M[8]="eight";
    M[9]="nine";
    M[10]="ten";
    M[11]="eleven";
    M[12]="twelve";
    M[13]="thirteen";
    M[14]="fourteen";
    M[15]="fifteen";
    M[16]="sixteen";
    M[17]="seventeen";
    M[18]="eighteen";
    M[19]="nineteen";
    P['2']="twenty";
    P['3']="thirty";
    P['4']="forty";
    P['5']="fifty";
    P['6']="sixty";
    P['7']="seventy";
    P['8']="eighty";
    P['9']="ninety";

    ll n,i,j,ln;
    char s[maax];
    cin>>n;
    //cout<<M[n]<<endl;
    if(M[n]==""){
        sprintf(s,"%lld",n);
        cout<<P[s[0]];
        if(s[1]!='0'){
            n=n%10;
            cout<<"-"<<M[n]<<endl;
        }
    }
    else{
        cout<<M[n]<<endl;
    }
    return 0;
}
