#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,b,c,ans,y;
    cin>>a>>b>>c;
    ans=b-a; //cout<<b<<endl;
    //b=abs(b);
    //c=abs(c);
    if(c==0 && ans==0)
        cout<<"YES\n";
    else if(c==0 && ans!=0)
        cout<<"NO\n";
    else if(a>b && c>0)
        cout<<"NO\n";
    else if(a<b && c<0)
        cout<<"NO\n";
    else if(ans%c==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
