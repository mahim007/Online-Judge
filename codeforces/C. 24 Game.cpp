#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i;
    cin>>n;
    if(n<=3) cout<<"NO\n";
    else if(n%2==0){
        cout<<"YES\n";
        cout<<"1 * 2 = 2\n";
        cout<<"2 * 3 = 6\n";
        cout<<"4 * 6 = 24\n";
        for(i=5;i<=n;i=i+2){
            cout<<i+1<<" - "<<i<<" = 1\n";
            cout<<"24 * 1 = 24\n";
        }
    }
    else if(n%2==1){
        cout<<"YES\n";
        cout<<"2 - 1 = 1\n";
        cout<<"1 + 3 = 4\n";
        cout<<"4 * 5 = 20\n";
        cout<<"4 + 20 = 24\n";
        for(i=6;i<=n;i=i+2){
            cout<<(i+1)<<" - "<<i<<" = 1\n";
            cout<<"24 * 1 = 24\n";
        }
    }

    return 0;
}
