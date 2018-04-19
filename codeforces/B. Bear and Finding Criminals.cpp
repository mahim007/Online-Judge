#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[109];
int main(){
    ll l,r,n,a,cnt=0,k,flag,i,j;
    cin>>n>>a;
    l=r=a;
    for(i=1;i<=n;i++) cin>>arr[i];
    while(l>=1 || r<=n){
        flag=0;
        if(l>=1){
            if(arr[l]==1){
                flag++;
            }
        }

        if(r<=n){
            if(arr[r]==1){
                flag++;
            }
        }
        if(flag==2){
            cnt+=flag;
        }
        else if(flag==1 && l<1 && r<=n) cnt++;
        else if(flag==1 && l>=1 && r>n) cnt++;
        if(l==r && flag==2) cnt--;
        l--;
        r++;
    }

    cout<<cnt<<endl;
    return 0;
}
