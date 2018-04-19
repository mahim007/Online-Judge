#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[50][50];
ll n;

void printll(){
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    ll i,j,k;
    cin>>n;
    ll num=n*n; //cout<<num<<endl;
    ll mid=(n+1)/2;
    k=1;
    for(i=1;i<=n;i++){
        if(arr[mid][i]==0){
            arr[mid][i]=k;
            k+=2;
        }
        if(arr[i][mid]==0){
            arr[i][mid]=k;
            k+=2;
        }
    } //printll();system("pause");

    for(i=1;i<=n && k<=num;i++){
        for(j=mid;j>=1;j-=2){
            if(arr[i][j]==0 && k<=num){
                arr[i][j]=k;
                k+=2;
            }

            if(arr[n-i+1][j]==0 && k<=num){
                arr[n-i+1][j]=k;
                k+=2;
            }
        }

        for(j=mid;j<=n;j+=2){
            if(arr[i][j]==0 && k<=num){
                arr[i][j]=k;
                k+=2;
            }

            if(arr[n-i+1][j]==0 && k<=num){
                arr[n-i+1][j]=k;
                k+=2;
            }
        }
    }

    k=2;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(arr[i][j]==0){
                arr[i][j]=k;
                k+=2;
            }
        }
    }

    printll();

    return 0;
}
