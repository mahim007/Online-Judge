#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 9999999999
vector<ll>V;

ll calculate(ll b){ //cout<<"calc function"<<endl;
    ll x=0;
    ll p=1;
    for(ll i=V.size()-1;i>=0;i--){
        x+=V[i]*p; //cout<<x<<endl;
        p=p*b;
    }

    return x;
}

int main(){

    ll n,b,num1,num2,i,j,d;
    cin>>n>>b;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        V.push_back(d);
    } //cout<<"1st input"<<endl;

    num1=calculate(b); //cout<<"number 1:"<<num1<<endl;
    V.clear();
    cin>>n>>b;
    for(i=1;i<=n;i++){
        ll d;
        cin>>d;
        V.push_back(d);
    }
    num2=calculate(b); //cout<<"number 2:"<<num2<<endl;
    if(num1==num2){
        cout<<"="<<endl;
    }
    else if(num1<num2){
        cout<<"<"<<endl;
    }
    else if(num1>num2){
        cout<<">"<<endl;
    }

    return 0;
}
