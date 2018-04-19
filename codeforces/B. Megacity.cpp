#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define eps 1e-9
struct data{
    ll x,y,p;
    double dis;

    bool operator < (const data &P) const{
        return dis<P.dis;
    }
};
vector<data>V;

double calc(double x,double y){
    return sqrt(((x-0.0)*(x-0.0))+((y-0.0)*(y-0.0)));
}

int main(){
    ll n,s,i,j;
    scanf("%lld %lld",&n,&s);
    for(i=1;i<=n;i++){
        data D;
        scanf("%lld %lld %lld",&D.x,&D.y,&D.p);
        D.dis=calc((double)D.x,(double)D.y)+eps;
        V.push_back(D);
    }

    sort(V.begin(),V.end());
    for(i=1;i<n;i++){
        //cout<<V[i].p<<" "<<V[i].dis<<"\n";
        V[i].p+=V[i-1].p;
    }

    for(i=0;i<n;i++){
        if(s+V[i].p>=1000000){
            printf("%0.8lf\n",V[i].dis);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
