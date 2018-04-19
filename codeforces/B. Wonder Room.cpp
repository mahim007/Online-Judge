#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,a,b;

ll check(ll z){
    ll i,x,y;
    for(ll i=1;i*i<=z;i++){
        if(z%i==0){
            x=i;
            y=z/i;
            if((x>=a && y>=b)){
                cout<<x*y<<"\n";
                cout<<x<<" "<<y<<"\n";
                return 1;
            }
            else if((x>=b && y>=a)){
                cout<<x*y<<"\n";
                cout<<y<<" "<<x<<"\n";
                return 1;
            }
        }
    }

    return 0;
}

int main(){
    ll a1,b1;
    cin>>n>>a>>b;
    if((a*b)>=(6*n)){
        cout<<a*b<<"\n";
        cout<<a<<" "<<b<<"\n";
    }
    else{
        for(ll i=6*n;i<=(6*(n+1));i++){
            if(check(i)) return 0;
        }


        b1=(6*n)/a;
        if((a*b1)<(6*n)) b1++;
        a1=(6*n)/b;
        if((a1*b)<(6*n)) a1++;

        if((a1*b)<(b1*a)){
            cout<<(a1*b)<<"\n";
            cout<<a1<<" "<<b<<"\n";
        }
        else{
            cout<<(b1*a)<<"\n";
            cout<<a<<" "<<b1<<"\n";
        }
    }

    return 0;
}
