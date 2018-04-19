#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define limit 100009
ll arr[limit];
int main(){
    ll n,h,k,i,j,cnt=0;
    cin>>n>>h>>k;
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }

    i=1;
    ll sum=0;
    while(i<=n){
        while(i<=n && sum+arr[i]<=h){
            sum+=arr[i];
            i++;
        } //cout<<"now sum:"<<sum<<endl;

        ll d =sum/k; //cout<<"d:"<<d<<endl;
        cnt+=d; //cout<<"cnt:"<<cnt<<endl;
        sum-=(d*k); //cout<<"sum:"<<sum<<endl;
        if(i<=n && sum+arr[i]<=h) continue;
        else if(i<=n && sum+arr[i]>h){ //cout<<"here.....\n";
            sum-=k;
            cnt++;
        }

        if(sum<0) sum=0;
    }
         //cout<<"last:"<<sum<<endl;
    while(sum>0){
        sum-=k; //cout<<"here!!\n";
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
