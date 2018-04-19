#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t=0,a,b;
    cin>>a>>b;
    while(a>0 && b>0){
        if(a<b){
            a=a+1;
            b-=2;
        }
        else{
            b+=1;
            a-=2;
        }
        if(a>=0 && b>=0)
            t++;
    }

    cout<<t<<endl;
    return 0;
}
