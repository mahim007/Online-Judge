#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
ll a[lim],b[lim];

int main(){
    ll n,i,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }

    if(a[1]%2==0){
        b[1]=1;
    }
    else{
        b[1]=0;
    }

    for(i=2;i<=n;i++){
        if(a[i]%2==0){
            if(b[i-1]==1){
                b[i]=0;
            }
            else{
                b[i]=1;
            }
        }
        else{
            if(b[i-1]==0){
                b[i]=0;
            }
            else{
                b[i]=1;
            }
        }
    }

    for(i=1;i<=n;i++){
        if(b[i]) printf("1\n");
        else printf("2\n");
    }
    return 0;
}
