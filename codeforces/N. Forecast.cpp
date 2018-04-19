#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9
int main(){
    double a,b,c,x,y;
    cin>>a>>b>>c;
    x=(-b+sqrt(b*b-4*a*c))/(2*a);
    y=(-b-sqrt(b*b-4*a*c))/(2*a);
    if(x>y){
        printf("%0.10lf\n",x);
        printf("%0.10lf\n",y);
    }
    else{
        printf("%0.10lf\n",y);
        printf("%0.10lf\n",x);
    }
    return 0;
}
