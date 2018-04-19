#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009

char s[mxn];
ll arr[mxn];

int main(){
    ll ln,i,j;
    gets(s);
    ln=strlen(s);
    for(i=1;i<ln;i++){
        if(s[i]==s[i-1]) arr[i]=1;
        else arr[i]=0;
    }

    for(i=1;i<ln;i++) arr[i]+=arr[i-1];
    ll m;
    scanf("%lld",&m);
    for(i=1;i<=m;i++){
        ll a,b;
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",arr[b-1]-arr[a-1]);
    }

    return 0;
}
