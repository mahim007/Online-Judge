#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 200009

ll a[mxn];

int main(){
    ll n,i,j,flag=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++) scanf("%lld",&a[i]);

    ll hand=0;
    for(i=1;i<=n;i++){
        a[i]-=hand;
        hand=0;
        if(a[i]%2==0 && a[i]>=0){
            hand=0;
            continue;
        }
        else if(a[i]>=0 && a[i]%2==1){
            hand=1;
        }
        else if(a[i]<0){
            flag=0;
            break;
        }
    }

    if(hand==1) flag=0;
    if(flag==1) printf("YES\n");
    else printf("NO\n");

    return 0;
}
