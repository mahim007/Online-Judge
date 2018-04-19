#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi acos(-1.0)
int main(){
    double d,h,v,e,ans;
    cin>>d>>h>>v>>e;
    double r=d/2.0;
    double area=pi*r*r*h;
    double rain=pi*r*r*e;
    if(rain>v){
        cout<<"NO"<<endl;
    }
    else{
        double diff=v-rain;
        ans=area/diff;
        printf("YES\n");
        printf("%0.9lf\n",ans);
    }

    return 0;
}
