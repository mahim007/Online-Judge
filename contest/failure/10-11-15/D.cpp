#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string str[1002];
string p="0000000000000000000000";
int main(){
    ll n,m,k,i,x,cnt=0,j;
    scanf("%lld %lld %lld",&n,&m,&k);
    for(i=1;i<=m+1;i++){
        scanf("%lld",&x);
        while(x){
            ll p=x&1; //cout<<"p:"<<p<<endl;
            x=x>>1; //cout<<"x:"<<x<<endl;
            str[i]+=p+'0';
        } //cout<<str[i]<<" "<<str[i].size()<<endl;
        str[i]+=p;
    }
    for(i=1;i<=m;i++){
        x=0;
        for(j=0;j<22;j++){
            if(str[i][j]!=str[m+1][j]){
                x++;
            }
        }
        if(x<=k) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
