#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char arr[9][9];

struct node{
    ll x,y;
};
vector<node>W,B;

int main(){
    ll i,j,k,ans=1,mn=9999;
    for(i=1;i<=8;i++){
        for(j=1;j<=8;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='W'){
                node d;
                d.x=i;
                d.y=j;
                W.push_back(d);
            }
            else if(arr[i][j]=='B'){
                node d;
                d.x=i;
                d.y=j;
                B.push_back(d);
            }
        }
    }

    for(i=0;i<W.size();i++){
        node d=W[i]; //cout<<"w:"<<d.x<<" "<<d.y<<endl;
        ll p=0;
        while(d.x-1>=1 && arr[d.x-1][d.y]=='.'){
            p++;
            d.x--;
        }

        if(d.x==1){
            if(p<mn) mn=p;
        }
    }

    for(i=0;i<B.size();i++){
        node d=B[i];
        ll p=0;
        while(d.x+1<=8 && arr[d.x+1][d.y]=='.'){
            p++;
            d.x++;
        }

        if(d.x==8){
            if(p<mn){
                ans=2;
                break;
            }
        }
    }

    if(ans==1) cout<<"A"<<endl;
    else cout<<"B"<<endl;

    return 0;
}
