#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9
double accpt[6];
double wa[6];
double marks[6]={0,500,1000,1500,2000,2500};
int main(){
    ll i,j,k;
    double score=0,hs,hu;
    for(i=1;i<=5;i++){
        scanf("%lf",&accpt[i]);
    }

    for(i=1;i<=5;i++){
        scanf("%lf",&wa[i]);
    }

    for(i=1;i<=5;i++){
        double x,y;
        x=ceil(0.3*marks[i]); //cout<<"x:"<<x;
        y=ceil((1-(accpt[i]/250))*marks[i]-50*wa[i]);//cout<<" y:"<<y;
        score+=(ll)max(x,y); //cout<<" score:"<<score<<endl; cout<<(1.0-(accpt[i]/250.0))<<endl;
    }
    scanf("%lf %lf",&hs,&hu);
    score=score+(100*hs)-(50*hu);
    printf("%lld\n",(ll)(score+eps));
    return 0;
}

