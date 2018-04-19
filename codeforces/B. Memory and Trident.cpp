#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
char s[mxn];
map<char,ll>M;

int main(){
    ll ln,i,j,k,cnt=0;
    gets(s);
    ln=strlen(s);
    if(ln&1){
        printf("-1\n");
    }
    else{
        ll m=ln/2;
        for(i=0;i<ln;i++){
            M[s[i]]++;
        }

        cnt+=abs(M['L']-M['R']);
        cnt+=abs(M['U']-M['D']);
        printf("%lld\n",cnt/2);
    }

    return 0;
}
