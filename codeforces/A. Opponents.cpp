#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[109];
string s;
int main(){
    ll n,i,j,mx=0,cnt=0,d,flag;
    cin>>n>>d;
    for(i=1;i<=d;i++){
        cin>>s;
        flag=0;
        for(j=0;j<n;j++){
            if(s[j]=='0'){
                arr[i]=1;
                break;
            }
        }
    }

    for(i=1;i<=d;i++){
        if(arr[i]==0){
            cnt=0;
        }
        else{
            cnt+=arr[i];
            if(cnt>mx) mx=cnt;
        }
    }

    cout<<mx<<"\n";
    return 0;
}
