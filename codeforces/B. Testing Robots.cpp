#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[509][509];
string s;
int main(){
    ll m,n,x,y,d=0;
    cin>>m>>n>>x>>y>>s;
    arr[x][y]=1;
    printf("1 ");
    ll ln=s.size();
    for(ll i=0;i<ln-1;i++){
        ll moved=1;
        if(s[i]=='U' && x>1) x--;
        else if(s[i]=='D' && x<m) x++;
        else if(s[i]=='R' && y<n) y++;
        else if(s[i]=='L' && y>1) y--;
        else moved=0;
        if(moved==0 || arr[x][y]==1){
            printf("0 ");
        }
        else{
            printf("1 ");
            d++;
        }
        arr[x][y]=1;
    }
    printf("%lld\n",n*m-d-1);
}
