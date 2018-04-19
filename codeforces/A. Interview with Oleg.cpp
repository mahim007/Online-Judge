#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s;
ll arr[109];

int main(){
    ll n,i,j,k;
    cin>>n;
    cin>>s;

    k=0;

    for(i=0;i<n;i++){
        if(s[i]=='o'){
            if(i+2<n && s[i+1]=='g' && s[i+2]=='o'){
                k++;
                arr[i]=arr[i+1]=arr[i+2]=k;
                j=i+3;
                while(j+1<n && s[j]=='g' && s[j+1]=='o'){
                    arr[j]=arr[j+1]=k;
                    j=j+2;
                }
                i=j;
                i--;
            }
        }
    }

    k=-1; //for(i=0;i<n;i++) cout<<arr[i]<<" "; cout<<"\n";
    for(i=0;i<n;i++){
        if(arr[i]==0) cout<<s[i];
        else if(arr[i]!=0 && arr[i]!=arr[i-1]){
            k=arr[i];
            cout<<"***";
        }
    }

    cout<<"\n";
    return 0;
}
