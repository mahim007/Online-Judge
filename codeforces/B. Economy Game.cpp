#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll flag,n;

void calculate(ll sum){ cout<<sum<<endl;
    if(flag==1) return;
    if(sum>n) return;
    if(sum==n){
        flag=1;
        return;
    }

    calculate(sum+1234567);
    calculate(sum+123456);
    calculate(sum+1234);
}

int main(){
    cin>>n;
    calculate(0);
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
