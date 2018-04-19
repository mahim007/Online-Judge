#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll d,l,v1,v2;
    double ans;
    cin>>d>>l>>v1>>v2;
    ans=(double)(l-d)/(v1+v2);
    printf("%0.10lf\n",ans+1e-9);
    return 0;
}
