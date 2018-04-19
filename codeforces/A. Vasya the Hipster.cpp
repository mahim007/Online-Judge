#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    x=min(a,b);
    a-=x;
    b=b-x;
    if(a!=0){
        y=a/2;
    }
    else{
        y=b/2;
    }
    printf("%d %d\n",x,y);
    return 0;
}
