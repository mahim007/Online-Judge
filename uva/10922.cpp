#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char s[1009];
//ll sum;

ll getsum(ll n){
    ll d=0;
    if(n<10){
        return n;
    }
    while(n){
        d+=n%10;
        n=n/10;
    }
    return d;
}

int main(){
    ll sum,i,j,cnt,ln;
    while(gets(s)){
        if(!strcmp(s,"0")){
            break;
        }
        sum=0;
        ln=strlen(s);
        for(i=0;i<ln;i++){
            sum+=s[i]-'0';
        } //cout<<"sum:"<<sum<<endl;
        cnt=1;
        while(sum>=10){
            cnt++;
            sum=getsum(sum); //cout<<"cnt:"<<cnt<<endl;
        }
        if(sum==9){
            printf("%s is a multiple of 9 and has 9-degree %lld.\n",s,cnt);
        }
        else{
            printf("%s is not a multiple of 9.\n",s);
        }
    }
    return 0;
}
