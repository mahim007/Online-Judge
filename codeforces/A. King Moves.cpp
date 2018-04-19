#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dx[]={-1,1,0,0,-1,1,1,-1};
ll dy[]={0,0,1,-1,1,-1,1,-1};

ll call(ll x,ll y){
    return ((x>=1 && x<=8) && (y>=1 && y<=8));
}

int main(){
    ll x,y,cnt=0;
    char ch;
    cin>>ch>>x;
    y=ch-'a'+1;
    for(ll i=0;i<8;i++){
        if(call(x+dx[i],y+dy[i]))
            cnt++;
    }

    cout<<cnt<<"\n";
    return 0;
}
