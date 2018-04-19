#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,cx,cy,r,x,y;
    cin>>T;
    for(t=1;t<=T;t++){
        cin>>cx>>cy>>r>>x>>y;
        ll dist=sqrt((cx-x)*(cx-x)+(cy-y)*(cy-y));
        printf("Case %lld: ",t);
        if(dist<r){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
