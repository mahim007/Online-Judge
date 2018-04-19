#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[4][3];
vector<double>V;
int main(){
    ll n,x,y,area,p,q,i,j,k;
    double xokkho=0,yokkho=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&arr[i][1],&arr[i][2]);
    }
    if(n==1){
        printf("-1\n");
        return 0;
    }

    ll flag=0;
    for(i=1;i<=n;i++){
            p=arr[i][1];
            q=arr[i][2];
        for(j=i+1;j<=n;j++){
            x=arr[j][1];
            y=arr[j][2];
            if(p!=x && q!=y){
                flag=1;
                ll m=x;
                ll n=q;
                double l=sqrt(((p-m)*(p-m))+((q-n)*(q-n)));
                double w=sqrt(((x-m)*(x-m))+((y-n)*(y-n)));
                printf("%lld\n",(ll)(l*w));
                return 0;
            }
            else if(p==x || q==y){
                if(p==x){
                    xokkho=sqrt(((p-x)*(p-x))+((q-y)*(q-y)));
                }
                else if(q==y){
                    yokkho=sqrt(((p-x)*(p-x))+((q-y)*(q-y)));
                }
                if(xokkho>0.0 && yokkho>0.0){
                    printf("%lld\n",(ll)(xokkho*yokkho));
                    return 0;
                }
            }
        }
    }
    if(flag==0){
        printf("-1\n");
    }
    return 0;
}
