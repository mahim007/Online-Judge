#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        if(a==b && a!=c)
            printf("C\n");
        else if(a==c && a!=b){
            printf("B\n");
        }
        else if(b==c && b!=a)
            printf("A\n");
        else
            printf("*\n");
    }
    return 0;
}
