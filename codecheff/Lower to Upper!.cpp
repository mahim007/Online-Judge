#include<bits/stdc++.h>
using namespace std;
char s[109];
int main(){
    int T,t;
    scanf("%d",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(s);
        int ln=strlen(s);
        printf("Case %d: ",t);
        for(int i=0;i<ln;i++){
            if(s[i]>='a' && s[i]<='z')
                printf("%c",(s[i]-'a')+'A');
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
