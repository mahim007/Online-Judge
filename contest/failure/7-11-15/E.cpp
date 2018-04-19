#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char p[109];
int main(){
    ll ln,i,l=0,u=0;
    gets(p);
    ln=strlen(p);
    for(i=0;i<ln;i++){
        if(p[i]>='a' && p[i]<='z')
            l++;
        else
            u++;
    }
    if(l>=u){
        strlwr(p);
    }
    else
        strupr(p);
    puts(p);
    return 0;
}
