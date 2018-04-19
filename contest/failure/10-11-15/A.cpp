#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll z[51][3];
ll x,y;
ll arr[1009];
int main(){
    ll p,q,l,r,cnt=0,i,j,k;
    scanf("%lld %lld %lld %lld",&p,&q,&l,&r);
    for(i=1;i<=p;i++){
        scanf("%lld %lld",&z[i][1],&z[i][2]);
    }
    for(i=1;i<=q;i++){
        scanf("%lld %lld",&x,&y);
        for(j=1;j<=p;j++){
            while(x<l){
                x++;y++;
            }
            while(x<=r){
                if((x>=z[i][1] && x<=z[i][2]) || (y>=z[i][1] && y<=z[i][2])){
                    arr[x]=1;
                    cnt++;
                }
                x++;y++;
            }
        } cout<<cnt<<endl;
    }
    cout<<cnt<<endl;
}
