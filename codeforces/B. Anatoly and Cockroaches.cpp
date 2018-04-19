#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

char a[mxn],b[mxn],s[mxn];
ll black,red;

ll check(char *p){
    black=0,red=0;
    ll ln=strlen(s);
    for(ll i=0;i<ln;i++){
        if(s[i]!=p[i] && s[i]=='b') black++;
        if(s[i]!=p[i] && s[i]=='r') red++;
    }

    ll mn=min(black,red);
    return mn+(black-mn)+(red-mn);
}

int main(){
    ll ln,i,j,k,n,ans=0;
    for(i=0;i<mxn;i++){
        if(i%2==0){
            a[i]='r';
            b[i]='b';
        }
        else{
            a[i]='b';
            b[i]='r';
        }
    }

    scanf("%lld",&n);
    getchar();
    gets(s);
    ll c1=check(a);
    ll c2=check(b);
    if(c1<c2){
        printf("%lld\n",c1);
    }
    else{
        printf("%lld\n",c2);
    }

    return 0;
}
