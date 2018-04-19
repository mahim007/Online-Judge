#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,a,b,i,j;
    cin>>n>>a>>b;
    if(b>=0){
        while(b){
            a++;
            if(a>n)
                a=1;
            b--;
        }
    }
    else{
        b=-b;
        while(b){
            a--;
            if(a<1)
                a=n;
            b--;
        }
    }

    cout<<a<<endl;
    return 0;
}
