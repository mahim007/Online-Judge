#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 2009
#define mod 131071
char s[maax];

int main(){
    ll i,j,k;
    char ch;
    while(scanf("%c",&ch)==1){
        k=0;
        if(ch==' ' || ch=='\n')
            continue;
        s[k++]=ch;
        while(1){
            ch=getchar();
            if(ch=='#')
                break;
            if(ch>='0' && ch<='1'){
                s[k++]=ch;
            }
        }
        s[k]='\0';
        //cout<<s<<endl;
        ll res=0;
        ll p=0;
        for(i=k-1;i>=0;i--){
            res=res*2;
            res=res+(s[i]-'0');
            res=res%mod;
        }
        if(res==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
