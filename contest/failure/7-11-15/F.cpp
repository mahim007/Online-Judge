#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i,cnt=0,num;
    char ch[101];
    scanf("%lld",&n);
    getchar();
    for(i=1;i<=n;i++){
        gets(ch);
        if(ch[0]>='0' && ch[0]<='9'){
            sscanf(ch,"%lld",&num);
            if(num<18)
                cnt++;
        }
        else if((!strcmp(ch,"ABSINTH")) ||(!strcmp(ch,"BEER")) ||(!strcmp(ch,"BRANDY")) || (!strcmp(ch,"CHAMPAGNE")) || (!strcmp(ch,"GIN")) || (!strcmp(ch,"RUM")) || (!strcmp(ch,"SAKE")) || (!strcmp(ch,"TEQUILA")) || (!strcmp(ch,"VODKA")) || (!strcasecmp(ch,"WHISKEY")) || (!strcmp(ch,"WINE"))){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
