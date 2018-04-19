#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 100009
ll a[lim];

int main(){
    ll n,x=-1,y=-1,i,j,m=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);
    x=1;
    y=n;
    for(i=2;i<=n;i++){
        if(a[i-1]<a[i]){
            x=i;
        }
        else break;
    }

    for(i=n-1;i>=0;i--){
        if(a[i]<a[i+1]){
            y=i;
        }
        else break;
    }

    if(x>y){
        printf("yes\n");
        printf("1 1\n");
        return 0;
    }

    i=x;
    j=y;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }

    ll f=1;
    for(i=2;i<=n;i++){
        if(a[i-1]>a[i]){
            f=0;
            break;
        }
    }

    if(f){
        printf("yes\n");
        printf("%lld %lld\n",x,y);
    }else{
        printf("no\n");
    }

    return 0;
}
