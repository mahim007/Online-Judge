#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f,b,i,j,total;
    while(scanf("%d",&n)==1){
        if(n==0){
            break;
        }
        printf("Printing order for %d pages:\n",n);
        int lose;
        if(n%4==0){
            lose=n/4;
        }
        else{
            lose=n/4+1;
        }
        f=1;
        b=lose*4;
        for(i=1;i<=lose;i++){
            printf("Sheet %d, front: ",i);
            if(b>n){
                printf("Blank");
            }
            else{
                printf("%d",b);
            }
            b--;
            printf(", ");
            printf("%d\n",f);
            f++;
            if(f>n){
                break;
            }
            printf("Sheet %d, back : ",i);
            printf("%d,",f);
            f++;
            if(b>n){
                printf(" Blank\n");
            }
            else{
                printf(" %d\n",b);
            }
            b--;
        }
    }
    return 0;
}
