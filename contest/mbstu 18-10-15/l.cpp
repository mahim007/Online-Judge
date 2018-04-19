#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    char s[6][50];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=5;i++){
        gets(s[i]);
    }

    int ln=strlen(s[1]);
    int isdot=0;
    int isstar=0;
    int cnt=0;
    for(i=0;i<ln;i++){
        if(s[1][i]=='*'){
            if(n==0) break;
            if(isstar==1) continue;
            isstar=1;
            cnt=0;
            for(j=1;j<=5;j++){
                if(s[j][i]=='*')
                    cnt++;
            }

            if(cnt==5)
                printf("1");
            else if(cnt==4)
                printf("2");
            else
                printf("3");
            n--;
        }
        else
            isstar=0;
    }
    printf("\n");
    return 0;
}
