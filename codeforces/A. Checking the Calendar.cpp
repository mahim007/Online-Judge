#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<string,ll>M;

int main(){
    M["saturday"]=1;
    M["sunday"]=2;
    M["monday"]=3;
    M["tuesday"]=4;
    M["wednesday"]=5;
    M["thursday"]=6;
    M["friday"]=7;

    string p,q;
    cin>>p>>q;
    if(p==q) cout<<"YES\n";
    else if(M[p]>=1 && M[p]<=4 && (M[q]-M[p]==0) || (M[q]-M[p]==2) || (M[q]-M[p]==3)) cout<<"YES\n";
    else if((M[p]==5 && M[q]==M[q]==7) || (M[p]==5 && M[q]==1)) cout<<"YES\n";
    else if((M[p]==6 && M[q]==1) || (M[p]==6 && M[q]==2)) cout<<"YES\n";
    else if((M[p]==7 && M[q]==2) || (M[p]==7 && M[q]==3)) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
