#include<stdio.h>
int arr[2009];
int flag[2009];
int main(){
    int n,i;
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<18;i++){
        arr[i]=arr[i-1]+arr[i-2];
        flag[arr[i]]=1;
    }
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        if(n==1 || flag[n]==0){
            printf("Alicia\n");
        }
        else{
            printf("Roberto\n");
        }
    }
    return 0;
}
