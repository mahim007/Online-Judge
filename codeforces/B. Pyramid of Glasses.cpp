#include<bits/stdc++.h>
using namespace std;
#define ll long long int
double arr[11][11];
int main(){
    ll n,t,i,j,k,ans=0;
    cin>>n>>t;

    for(i=1;i<=t;i++){
        arr[1][1]+=1;
        for(j=1;j<=n;j++){
            for(k=1;k<=j;k++){
                if(arr[j][k]>1.0){
                    arr[j+1][k]+=(arr[j][k]-1)/2;
                    arr[j+1][k+1]+=(arr[j][k]-1)/2;
                    arr[j][k]=1;
                }
            }
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(arr[i][j]>=1.0) ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}
