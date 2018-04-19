#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char a[9][9];
int main(){
    ll x=0,y=0,i,j;
    while(cin>>a[1]){
    x=0,y=0;
    for(i=2;i<=8;i++){
        cin>>a[i];
    }

    for(i=1;i<=8;i++){
        for(j=0;j<8;j++){
            if(a[i][j]=='Q'){
                x+=9;
            }
            else if(a[i][j]=='R'){
                x+=5;
            }
            else if(a[i][j]=='B'){
                x+=3;
            }
            else if(a[i][j]=='N'){
                x+=3;
            }
            else if(a[i][j]=='P'){
                x+=1;
            }
            else if(a[i][j]=='q'){
                y+=9;
            }
            else if(a[i][j]=='r'){
                y+=5;
            }
            else if(a[i][j]=='b'){
                y+=3;
            }
            else if(a[i][j]=='n'){
                y+=3;
            }
            else if(a[i][j]=='p'){
                y+=1;
            }

        }
    }

    if(x>y) cout<<"White\n";
    else if(y>x) cout<<"Black\n";
    else cout<<"Draw\n";
    }
    return 0;
}
