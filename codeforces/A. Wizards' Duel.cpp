#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll l,p,q;
    cin>>l>>p>>q;
    double ans=(double)l/(double)(p+q);
    ans*=p;
    printf("%0.6lf\n",ans);
    return 0;
}
