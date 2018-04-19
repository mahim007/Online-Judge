#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9

int main(){
    double a,b,c,d,e;
    double x,f,dis=0.0;
    ll i,j,k,n;
    scanf("%lf %lf",&x,&f);
    scanf("%lld",&n);

    a=0.0;
    b=1*x;
    c=2*x;
    d=3*x;
    e=4*x;

    for(i=1;i<=n;i++){
        dis+=f; //cout<<"dis:"<<dis<<"\n";
//        if(dis-e>=eps){
//            dis-=e;
//        }

        ll k=dis/e; //cout<<"k:"<<k<<"\n";
        dis-=k*e; //cout<<"dis:"<<dis<<"\n";

        if(dis>=a && dis<=b){
            printf("%0.6lf %0.6lf\n",dis+eps,0.0);
        }
        else if(dis>=b && dis<=c){
            printf("%0.6lf %0.6lf\n",x+eps,dis-b+eps);
        }
        else if(dis>=c && dis<=d){
            printf("%0.6lf %0.6lf\n",d-dis+eps,x+eps);
        }
        else if(dis>=d && dis<=e){
            printf("%0.6lf %0.6lf\n",0.0,e-dis+eps);
        }
    }

    return 0;
}
