#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,t,i;
    cin>>n>>t;
    if(t==10 && n==1) printf("-1\n");
    else{
        i=0;
        printf("%lld",t);
        if(t<=9) i=1;
        else i=2;
        for(;i<n;i++) cout<<"0";
    }
    cout<<endl;
    return 0;
}
