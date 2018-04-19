#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 100
string s;
ll arr[maax];
int main(){
    ll n,i,j,ln;
    cin>>s;
    ln=s.size();
    j=0;
    for(i=0;i<ln;i++){
        if(s[i]>='0' && s[i]<='9'){
            arr[j]=arr[j]*10+(s[i]-'0');
        }
        else{
            j++;
        }
    }
    sort(arr,arr+j+1);
    for(i=0;i<=j;i++){
        if(i==0){
            cout<<arr[i];
        }
        else{
            cout<<"+"<<arr[i];
        }
    }
    cout<<endl;
    return 0;
}
