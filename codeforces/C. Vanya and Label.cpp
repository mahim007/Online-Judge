#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
    ll i,j,k,n=0,sum=0,ans=1;
    string s;
    cin>>s;
    ll ln=s.size();
    for(i=0;i<ln;i++){
        sum=0;
        if(s[i]>='0' && s[i]<='9'){
            sum=s[i]-'0';
        }
        else if(s[i]>='A' && s[i]<='Z'){
            sum=s[i]-55;
        }
        else if(s[i]>='a' && s[i]<='z'){
            sum=s[i]-61;
        }
        else if(s[i]=='-'){
            sum=62;
        }
        else if(s[i]=='_'){
            sum=63;
        }

        k=1;
        while(k<=6){
            ll d=sum&1;
            if(d==0){
                ans=(ans*3)%mod;
            }
            sum=sum>>1;
            k++;
        }
    }

    cout<<ans<<endl;
    return 0;
}
