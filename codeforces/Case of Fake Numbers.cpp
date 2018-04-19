#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[1009];
int main(){
    ll n,i,flag,t;
    while(scanf("%lld",&n)==1){
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        flag=1;
        for(i=0;i<n;i++){
            if(arr[i]!=i){
                flag=0;
                break;
            }
        }
        t=n;
        if(flag==1){
            printf("Yes\n");
            continue;
        }
        else{
            while(t--){
                for(i=0;i<n;i++){
                    if(i&1){
                        arr[i]++;
                        if(arr[i]==n){
                            arr[i]=0;
                        }
                    }
                    else{
                        arr[i]--;
                        if(arr[i]<0){
                            arr[i]=n-1;
                        }
                    }
                }
                flag=0;
                for(i=0;i<n;i++){
                    if(arr[i]!=i){
                        flag=0;
                        break;
                    }
                }
                if(i==n){
                    flag=1;
                }
                if(flag==1){
                    break;
                }
            }
            if(flag==1){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }

        }
    }
    return 0;
}
