#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;

ll bigmod(ll n,ll p){
    ll ans=1;
    while(p){
        if(p&1) ans=(ans*n)%10000000;
        p=p>>1;
        n=(n*n)%10000000;
    }
    return ans%10000000;
}

int main(){
    ll n,i,j,k,ans;
    cin>>s;
    n=0;
    n=(s[0]-'0')*10000+(s[2]-'0')*1000+(s[4]-'0')*100+(s[3]-'0')*10+(s[1]-'0');
    //cout<<n<<endl;
    ans=bigmod(n,5);
    printf("%05lld\n",ans%100000);
    return 0;
}
