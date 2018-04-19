#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i,j,cls,opn,t,T,ln,flag;
    scanf("%lld",&T);
    getchar();
    char str[150];
    for(t=1;t<=T;t++){
        gets(str);
        ln=strlen(str);
        cls=opn=0;
        stack<char>s;
        s.push('1');
        for(i=0;i<ln;i++){
            if(str[i]=='(' || str[i]=='['){
                s.push(str[i]);
            }
            else if(str[i]==')' || str[i]==']'){
                if(str[i]==')'){
                    if(s.top()=='('){
                        s.pop();
                    }
                    else{
                        s.push(str[i]);
                    }
                }
                else{
                    if(s.top()=='['){
                        s.pop();
                    }
                    else{
                        s.push(str[i]);
                    }
                }
            }
        }
        s.pop();
        if(!s.empty()){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    return 0;
}
