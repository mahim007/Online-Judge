#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[1001];
int main(){
    ll n,m,i,j,cnt=0,num;
    char ch[5][10];
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=m;i++){
        scanf("%s %s %s %s %lld",ch[1],ch[2],ch[3],ch[4],&num);
        if(!strcmp(ch[3],"left")){
            for(j=num;j<=n;j++){
                arr[j]=1;
            }
        }
        else if(!strcmp(ch[3],"right")){
            for(j=num;j>=1;j--){
                arr[j]=1;
            }
        }
    }
    for(i=1;i<=n;i++){
        if(arr[i]==0){
            cnt++;
        }
    }
    if(cnt==0){
        printf("-1\n");
    }
    else{
        printf("%lld\n",cnt);
    }
    return 0;
}
