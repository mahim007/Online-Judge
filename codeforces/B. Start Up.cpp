#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 100009
char s[mxn];

ll check(char a,char b){
    if(a=='A' && b=='A') return 0;
    else if(a=='H' && b=='H') return 0;
    else if(a=='I' && b=='I') return 0;
    else if(a=='M' && b=='M') return 0;
    else if(a=='O' && b=='O') return 0;
    else if(a=='T' && b=='T') return 0;
    else if(a=='U' && b=='U') return 0;
    else if(a=='V' && b=='V') return 0;
    else if(a=='W' && b=='W') return 0;
    else if(a=='X' && b=='X') return 0;
    else if(a=='Y' && b=='Y') return 0;
    return 1;
}

int main(){
    ll i,j,k,f=1,ln;
    gets(s+1);
    ln=strlen(s+1); //cout<<ln<<" "<<s+1<<"\n";
    for(i=1,j=ln;i<=j;i++,j--){
        if(check(s[i],s[j])){
            f=0;
            break;
        }
    }

    if(f) printf("YES\n");
    else printf("NO\n");
    return 0;
}
