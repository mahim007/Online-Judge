#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char s[20];
char a[20],b[20];

int main(){
    ll i,j,k,ln;
    while(gets(s)){
        strcpy(a,s); //printf("%s\n",a);
        strcpy(b,s);
        ln=strlen(s);
        a[ln]='\0';
        b[ln]='\0';
        sort(a,a+ln); //printf("%s\n",a);
        if(a[0]=='0'){
            for(i=0;i<ln;i++){
                if(a[i]!='0'){
                    swap(a[0],a[i]);
                    break;
                }
            } //printf("now a:%s\n",a);
        }
        sort(b,b+ln);
        reverse(b,b+ln); //printf("%s\n",b);
        ll num1,num2,df,k;
        sscanf(a,"%lld",&num1);
        sscanf(b,"%lld",&num2);
        df=num2-num1;
        if(df==0){
            k=0;
        }
        else{
            k=df/9;
        }
        printf("%s - %s = %lld = 9 * %lld\n",b,a,df,k);
    }
    return 0;
}
