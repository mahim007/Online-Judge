#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,i,j,cnt=0;
    string s;
    cin>>s;
    ll sz=s.size();
    ll z=1;
    for(i=0;i<sz;i++){
        ll b=min((ll)abs((s[i]-'a'+1)-z),100000ll);
        b=min(b,min((ll)abs(z-(s[i]-'a'+1)),(ll)abs(26-(s[i]-'a'+1)+z)));
        b=min(b,abs(26-z+(s[i]-'a'+1)));
        cnt+=b;
        z=s[i]-'a'+1; //cout<<b<<" "<<s[i]<<" "<<z<<"\n";
    }

    cout<<cnt<<"\n";
    return 0;
}
