#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 109
char a[mxn][mxn];
ll n;
ll call(ll i,ll j){
    ll s=0;
    if(i>0 && a[i-1][j]=='o') s++;
    if(i<n-1 && a[i+1][j]=='o') s++;
    if(j>0 && a[i][j-1]=='o') s++;
    if(j<n-1 && a[i][j+1]=='o') s++;
    return s%2;
}

int main(){
    ll i,j,k,f=1;
    scanf("%lld",&n);
    getchar();
    for(i=0;i<n;i++) gets(a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(call(i,j)){
                printf("NO\n");
                return 0;
            }
        }
    }


    printf("YES\n");
    return 0;
}
