#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char s[10009];
int main(){
    ll i,j,k,ln;
    ll ans,t=1;
    while(gets(s)){
        if(!strcmp(s,"0"))
            break;
        ans=1;
        ln=strlen(s);
        printf("%lld. ",t++);
        if(s[ln-1]!='2' || s[0]!='1'){
            printf("NOT\n");
            continue;
        }
        for(i=1;i<ln;i++){
            if(s[i]=='1'){
                ans=0;
                break;
            }
            else if(s[i]=='2'){
                if(s[i-1]!='4' && s[i-1]!='6'){
                    ans=0;
                    break;
                }
                if(i!=ln-1){
                    ans=0;
                    break;
                }
            }
            else if(s[i]=='3'){
                if(s[i-1]!='4' && s[i-1]!='6'){
                    ans=0;
                    break;
                }
            }
            else if(s[i]=='4'){
                if(s[i-1]!='1' && s[i-1]!='3'){
                    ans=0;
                    break;
                }
            }
            else if(s[i]=='5'){
                if(s[i-1]!='1' && s[i-1]!='3'){
                    ans=0;
                    break;
                }
            }
            else if(s[i]=='6'){
                if(s[i-1]!='8'){
                    ans=0;
                    break;
                }
            }
            else if(s[i]=='7'){
                if(s[i-1]!='8'){
                    ans=0;
                    break;
                }
            }
            else if(s[i]=='8'){
                if(s[i-1]!='5' && s[i-1]!='7'){
                    ans=0;
                    break;
                }
            }
        }
        if(ans)
            printf("VALID\n");
        else
            printf("NOT\n");
    }
    return 0;
}
