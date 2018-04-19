#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lim 1000000009
#define mxn 5009
ll arr[mxn];

ll call(ll l,ll r){ //cout<<"l:"<<l<<" r:"<<r<<endl;//system("pause");
    if(l>r) return 0;
    ll mn=999999999999999999;
    ll ret=0;
    for(ll i=l;i<=r;i++){
        mn=min(mn,arr[i]);
    } //cout<<"min:"<<mn<<endl;

    ll x,y;
    x=l;
    y=l;
    //ret=mn;
    for(ll i=l;i<=r;i++){
        y=i;
        arr[i]-=mn;
        if(arr[i]==0){
            ret+=min(call(x,y-1),(y-1-x)+1);
            x=i+1;
        }
        else if(i==r){
            ret+=min(call(x,y),(y-x)+1);
        }
    } //cout<<"ret:"<<min(ret+mn,r-l+1)<<endl;
    return min(ret+mn,r-l+1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,i,j,k,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++) cin>>arr[i];

    cnt=call(1,n);
    cout<<cnt<<"\n";
    return 0;
}
