#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ll n,i,cnt1,cnt0;
    while(scanf("%lld",&n)==1){
        cin>>s;
        cnt1=cnt0=0;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                cnt1++;
            }
            else{
                cnt0++;
            }
        }
        printf("%lld\n",(ll)(n-(2*min(cnt0,cnt1))));
    }
    return 0;
}
