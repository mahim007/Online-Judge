#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll mn,mx,n,i,j;
    cin>>n;
    mn=mx=0;
    i=0;
    while(i<=n){
       if(i+2<=n){
        mx+=2;
       }
       else if(i+1<=n){
        mx+=1;
       }

       i=i+7;
    }

    i=0;
    while(i<=n){
        if(i+7<=n){
            mn+=2;
        }
        else if(i+6<=n){
            mn+=1;
        }

        i=i+7;
    }

    cout<<mn<<" "<<mx<<endl;5
}
