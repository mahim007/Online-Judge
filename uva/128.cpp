#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define md 34943
char s[md];
int main(){
    while(gets(s)){
        if(s[0]=='#'){
            break;
        }
        ll ln=strlen(s);
        ll sum=0;
        for(ll i=0;i<ln;i++){
            sum=sum<<8;
            sum=sum%md;
            sum=sum+s[i];
            sum=sum%md;
        }
        sum=sum<<16;
        sum=sum%md;
        int res=(md-sum)%md;
        printf("%02X %02X\n",res>>8,res%256);
    }
    return 0;
}
