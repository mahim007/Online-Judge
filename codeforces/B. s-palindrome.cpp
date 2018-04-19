#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 1009
char s[mxn];

ll check(char a,char b){
    if(a=='A' && b=='A') return 1;
    if(a=='b' && b=='d') return 1;
    if(a=='d' && b=='b') return 1;
    if(a=='H' && b=='H') return 1;
    if(a=='I' && b=='I') return 1;
    if(a=='M' && b=='M') return 1;
    //if(a=='m' && b=='m') return 1;
    if(a=='O' && b=='O') return 1;
    if(a=='o' && b=='o') return 1;
    if(a=='p' && b=='q') return 1;
    if(a=='q' && b=='p') return 1;
    if(a=='T' && b=='T') return 1;
    if(a=='U' && b=='U') return 1;
    //if(a=='u' && b=='u') return 1;
    if(a=='V' && b=='V') return 1;
    if(a=='v' && b=='v') return 1;
    if(a=='W' && b=='W') return 1;
    if(a=='w' && b=='w') return 1;
    if(a=='X' && b=='X') return 1;
    if(a=='x' && b=='x') return 1;
    if(a=='Y' && b=='Y') return 1;
    //if(a=='q' && b=='y') return 1;
    return 0;
}

int main(){
    ll ln,i,j,f=1;
    gets(s);
    ln=strlen(s);
    for(i=0,j=ln-1;i<=j;i++,j--){
        if(!check(s[i],s[j])){
            f=0;
            break;
        }
    }

    if(f) printf("TAK\n");
    else printf("NIE\n");

    return 0;
}

//WvoWvvWovW
