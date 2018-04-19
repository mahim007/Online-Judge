#include<bits/stdc++.h>
using namespace std;
char name[5][109];
int val[27];
int main(){
    int T,t,i,j,ans;
    scanf("%d",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(name[1]);
        gets(name[2]);
        int ln=strlen(name[1]);
        //strlwr(name[1]);
        //strlwr(name[2]);
        for(i=0;i<ln;i++){
            if(name[1][i]>='a' && name[1][i]<='z'){
                val[name[1][i]-'a'+1]++;
            }
            else if(name[1][i]>='A' && name[1][i]<='Z'){
                val[name[1][i]-'A'+1]++;
            }
        }

        ans=1;
        ln=strlen(name[2]);
        for(i=0;i<ln;i++){
            if(name[2][i]>='a' && name[2][i]<='z'){
                val[name[2][i]-'a'+1]--;
            }
            else if(name[2][i]>='A' && name[2][i]<='Z'){
                val[name[2][i]-'A'+1]--;
            }
        }

        for(i=1;i<27;i++){
            if(val[i]!=0){
                ans=0;
                break;
            }
        }
        printf("Case %d: ",t);
        if(ans==1)
            printf("Yes\n");
        else
            printf("No\n");
        memset(val,0,sizeof val);
    }
    return 0;
}
