#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
ll arr[15];
int main(){
    ll n,i,f1=0,f2=0;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++){
        arr[s[i]-'0']=1;
    }

    if(arr[0] && (arr[1] || arr[2] || arr[3])){
        cout<<"YES\n";
        return 0;
    }
    if((arr[1] || arr[2] || arr[3]) && (arr[7] || arr[9])) f1=1;
    if((arr[1] || arr[4] || arr[7]) && (arr[3] || arr[6] || arr[9])) f2=1;
    if(f1 && f2) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
