#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ll n,i,j,ans;
    while(scanf("%lld",&n)==1){
        cin>>s;
        if(n==1){
            printf("0\n");
            continue;
        }
        ans=0;
        ll ln=s.size();
        for(i=1;i<ln;i++){
            if(s[i]==s[i-1]){
                ans++;
            }
        }
        printf("%lld\n",ans);
        s.clear();
    }
    return 0;
}
