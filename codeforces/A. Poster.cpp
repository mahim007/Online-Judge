#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109

char s[mxn];

int main(){
    ll ln,pos,i,j,d;
    scanf("%lld %lld",&ln,&pos);
    getchar();
    gets(s+1);
    if((pos-1)<(ln-pos)){
        while(pos>1){
            printf("LEFT\n");
            pos--;
        }
        for(i=pos;i<=ln;i++){
            printf("PRINT %c\n",s[i]);
            if(i<ln) printf("RIGHT\n");
        }
    }
    else{
        while(pos<ln){
            printf("RIGHT\n");
            pos++;
        }
        for(i=pos;i>=1;i--){
            printf("PRINT %c\n",s[i]);
            if(i>1) printf("LEFT\n");
        }
    }

    return 0;
}
