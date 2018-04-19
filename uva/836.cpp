#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//string str[300];
ll arr[300][300];
int main(){
    ll n,i,j,k,sum,mx,d,x=0,t,T;
    char p[300];
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        //getchar();
        gets(p);
        n=0;
        gets(p);
        n=strlen(p);
        for(i=0;i<n;i++){
            if(p[i]=='1')
                arr[1][i+1]=1;
            else
                arr[1][i+1]=-999999999;
        }

        for(i=2;i<=n;i++){
            gets(p);
            for(j=0;j<n;j++){
                if(p[j]=='1'){
                    arr[i][j+1]=1;
                }
                else
                    arr[i][j+1]=-9999999999;
            }
        }

        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                arr[i][j]+=arr[i][j-1];
            }
        }

        mx=-9999999999;
        for(i=1;i<=n;i++){
            for(j=i;j<=n;j++){
                sum=0;
                for(k=1;k<=n;k++){
                    sum+=arr[k][j]-arr[k][i-1];
                    if(sum>mx) mx=sum;
                    if(sum<0) sum=0;
                }
            }
        }
        //x++;
        if(mx<0) mx=0;
        printf("%lld\n",mx);
        if(t!=T) printf("\n");
        //for(i=1;i<=n;i++) str[i].clear();
    }
    return 0;
}
