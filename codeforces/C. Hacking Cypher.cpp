#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1000009
char s[lim];
ll pre[lim],suf[lim],z[lim];
ll a,b;
void fun(ll n){
    z[n]=1;
    ll x=1;
    for(ll i=n-1;i>=1;i--){
        z[i]=(x*10)%b;
        x=(x*10)%b;
    }
}

int main(){
    ll ln,i,j,flag=0,ans;
    gets(s+1);
    scanf("%lld %lld",&a,&b);
    ln=strlen(s+1); //printf("sz=%lld\n",ln);
    fun(ln);
    for(i=1;i<=ln;i++){
        pre[i]=((pre[i-1]*10)+(s[i]-'0'))%a; //cout<<pre[i]<<" ";
    } //cout<<"\n";

    for(i=ln;i>=1;i--){
        suf[i]=(suf[i+1]+((s[i]-'0')*z[i]))%b; //cout<<suf[i]<<" ";
    } //cout<<"\n";

    for(i=1;i<ln;i++){
        if(pre[i]==0 && suf[i+1]==0 && s[i+1]!='0'){
            flag=1;
            ans=i;
            break;
        }
    }

    if(flag==0) printf("NO\n");
    else{
        printf("YES\n");
        for(i=1;i<=ans;i++) printf("%c",s[i]);
        printf("\n");
        for(i=ans+1;i<=ln;i++) printf("%c",s[i]);
        printf("\n");
    }

    return 0;
}
