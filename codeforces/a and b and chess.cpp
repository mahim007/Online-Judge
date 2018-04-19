#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string chess[10];
int main(){
    ll b=0,w=0,i,j;
    for(i=1;i<=8;i++){
        cin>>chess[i];
    }
    for(i=1;i<=8;i++){
        for(j=0;j<8;j++){
            if(chess[i][j]!='.'){
                if(chess[i][j]=='Q'){
                    w+=9;
                }
                else if(chess[i][j]=='R'){
                    w+=5;
                }
                else if(chess[i][j]=='B'){
                    w+=3;
                }
                else if(chess[i][j]=='N'){
                    w+=3;
                }
                else if(chess[i][j]=='P'){
                    w+=1;
                }
                else if(chess[i][j]=='q'){
                    b+=9;
                }
                else if(chess[i][j]=='r'){
                    b+=5;
                }
                else if(chess[i][j]=='b'){
                    b+=3;
                }
                else if(chess[i][j]=='n'){
                    b+=3;
                }
                else if(chess[i][j]=='p'){
                    b+=1;
                }
            }
        }
    }
    if(b>w){
        printf("Black\n");
    }
    else if(w>b){
        printf("White\n");
    }
    else{
        printf("Draw\n");
    }
    return 0;
}
