#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,f1,f2,f3,l1,h1,l2,h2,l3,h3;
    cin>>n;
    cin>>l1>>h1>>l2>>h2>>l3>>h3;
    f1=l1;
    f2=l2;
    f3=l3;
    while(f1+f2+f3<n){
        ll df=n-(f1+f2+f3);
        if(f1<h1){
            if((h1-f1)>df){
                f1+=df;
            }
            else{
                f1+=h1-f1;
            }
            continue;
        }
        if(f2<h2){
            if((h2-f2)>df){
                f2+=df;
            }
            else{
                f2+=h2-f2;
            }
            continue;
        }
        if((f3<h3)){
            if((h3-f3)>df){
                f3+=df;
            }
            else{
                f3+=h3-f3;
            }
            continue;
        }
    }
    cout<<f1<<" "<<f2<<" "<<f3<<endl;
    return 0;
}
