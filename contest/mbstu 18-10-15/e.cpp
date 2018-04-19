#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[21][1048579];
int main(){
    ll n,a,b,ans,t=1,k,fnd,i,j;
    while(scanf("%lld %lld %lld",&n,&a,&b)==3){
        fnd=0;
        arr[1][a]=arr[1][b]=t;
        for(i=1;i<=n;i++){
            k=1;
            for(j=1;j<=(1<<(n-i+1));j=j+2){
                if(arr[i][j]==t && arr[i][j+1]==t){
                    fnd=1;
                    ans=i;
                    break;
                }
                else if(arr[i][j]==t || arr[i][j+1]==t){
                    arr[i+1][k++]=t;
                }
                else{
                    arr[i+1][k++]=0;
                }
            }
            if(fnd==1) break;
        }
        printf("%lld\n",ans);
        t++;
    }
    return 0;
}
