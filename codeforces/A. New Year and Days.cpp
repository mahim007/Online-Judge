#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
    cin>>n;
    char s[20];
    gets(s);
    if(s[4]=='w'){
        if(n==5 || n==6) cout<<53<<endl;
        else cout<<52<<endl;
    }
    else{
        if(n<=29) cout<<12<<endl;
        else if(n==30) cout<<11<<endl;
        else if(n==31) cout<<7<<endl;
    }

    return 0;

}
