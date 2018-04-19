#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[99999+10];
int main(){
    ll n,i,mx;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        arr[0]=0;
        arr[1]=1;
        mx=1;
        for(i=2;i<=n;i++){
            ll p=i;
            if(!(p&1)){
                p=p/2;
                arr[i]=arr[p];
            }
            else{
                p=p/2;
                arr[i]=arr[p]+arr[p+1];
            }
            if(arr[i]>mx){
                mx=arr[i];
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
