#include<bits/stdc++.h>
using namespace std;
string s;
#define ll long long int
int main(){
    ll BD,WWW,i,j,k,ln,tie,A,T,t,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        BD=0;
        WWW=0;
        tie=0;
        A=0;
        scanf("%lld",&n);
        s.clear();
        cin>>s;
        ln=s.size();
        for(i=0;i<ln;i++){
            if(s[i]=='B'){
                BD++;
            }
            else if(s[i]=='W'){
                WWW++;
            }
            else if(s[i]=='T'){
                tie++;
            }
            else if(s[i]=='A'){
                A++;
            }
        }
        printf("Case %lld: ",t);
        if(n==A){
            printf("ABANDONED\n");
        }
        else if(BD+A==n){
            printf("BANGLAWASH\n");
        }
        else if(WWW+A==n){
            printf("WHITEWASH\n");
        }
        else if(BD>WWW){
            printf("BANGLADESH %lld - %lld\n",BD,WWW);
        }
        else if(WWW>BD){
            printf("WWW %lld - %lld\n",WWW,BD);
        }
        else{
            printf("DRAW %lld %lld\n",BD,tie);
        }
    }
    return 0;
}
