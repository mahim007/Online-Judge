#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,t,i,n,a,d,ans;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
        scanf("%d %d %d",&n,&a,&d);
        ans=a;
        for(i=2;i<=n;i++){
            ans=ans+a+d;
            a+=d;
        }
        printf("%d\n",ans);
    }
    return 0;
}
