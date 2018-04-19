#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char a[109][109];

int main(){
    ll n,m,i,j,f=1;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            char ch;
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y'){
                f=2;
            }
        }
    }

    if(f==2){
        cout<<"#Color\n";
    }
    else{
        cout<<"#Black&White\n";
    }

    return 0;
}
