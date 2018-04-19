#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll a[1000][18300];
char s[9];

ll calc_val(){
    ll x=0;
    ll sz=strlen(s);
    for(i=0;i<sz;i++){
        x=x*10+(s[i]-'0');
    }

    return x;
}

int main(){
    ll n,m,i,j,k,t,T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&m,&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                scanf("%s",s);
                if(s[0]=='='){

                }
                else{
                    a[i][j]=calc_val();
                }
            }
        }
    }
}
