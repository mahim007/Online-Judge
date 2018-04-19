#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[6];
vector<ll>V;
int main(){
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
    sort(a,a+6);
    ll mid=a[2];
    ll leg=0;
    for(ll i=0;i<6;i++){
        if(a[i]==mid) leg++;
        else{
            V.push_back(a[i]);
        }
    }

    if(leg==6){
        cout<<"Elephant\n";
    }
    else if(leg==5){
       cout<<"Bear\n";
    }
    else if(leg==4){
        if(V[0]==V[1]) cout<<"Elephant\n";
        else cout<<"Bear\n";
    }
    else cout<<"Alien\n";

    return 0;
}
