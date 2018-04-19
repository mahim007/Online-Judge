#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 1009
char s[maax],t[maax];
ll digit[maax];
int main(){
    ll i,j,k,ln,indx;
    while(gets(s)){
        if(s[0]=='-'){
            break;
        }
        ln=strlen(s); //cout<<"size:"<<ln<<endl;
        if(ln==1){
            printf("1%c\n",s[0]);
            continue;
        }
        for(i=0;i<ln;i++){
            digit[i]=s[i]-'0';
        }
        k=0;
        indx=0;
        for(i=9;i>=2;i--){ //cout<<"i:"<<i<<endl;
            ll mod=0;
            while(1){
                mod=0;
                for(j=k;j<ln;j++){
                    mod=mod*10+digit[j];
                    mod=mod%i; //cout<<"mod:"<<mod<<endl;
                }
                if(mod==0){
                    t[indx++]=(i+'0'); //cout<<"t:"<<t[indx-1]<<endl;
                    mod=0;
                    for(j=k;j<ln;j++){
                        mod=mod*10+digit[j];
                        digit[j]=mod/i;
                        mod=mod%i;
                    }
                    for(;digit[k]==0;k++);
                }
                else{
                    break;
                }
            }
        }
        if(k==ln-1 && digit[k]==1){
            for(i=indx-1;i>=0;i--){
                printf("%c",t[i]);
            }
        }
        else{
            printf("There is no such number.");
        }
        printf("\n");
        //s.clear();
        //t.clear();
        //memset(digit,0,sizeof digit);
    }
    return 0;
}
