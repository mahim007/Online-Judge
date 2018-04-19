#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s1="I hate ";
    string s2="I love ";
    ll n,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        if(i%2){
            cout<<s1;
        }
        else{
            cout<<s2;
        }

        if(i<n) cout<<"that ";
    }

    cout<<"it\n";
    return 0;
}
