#include<stdio.h>
int main(){
    long long int n,i,ans=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
        ans*=i;
    printf("%lld\n",ans);
    return 0;
}
