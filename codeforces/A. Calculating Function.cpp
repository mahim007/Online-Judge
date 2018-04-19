#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    if(n&1){
        n--;
        cout<<-((n>>1)+1)<<"\n";
    }
    else cout<<(n>>1)<<"\n";

    return 0;
}
