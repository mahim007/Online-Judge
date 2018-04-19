#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<double,ll>A,B;

double dist(double nx,double ny,double x,double y){
    return sqrt((nx-x)*(nx-x)+(ny-y)*(ny-y));
}

int main(){
    ll i,j,k,ax,ay,bx,by,cx,cy,n;
    double ans=0,tmp=1<<30;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    cin>>n;
    for(i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        ans+=2.0*dist(x,y,cx,cy);
        double d=dist(x,y,ax,ay)-dist(x,y,cx,cy);
        A[d]=i; //cout<<A[d];
        d=dist(x,y,bx,by)-dist(x,y,cx,cy);
        B[d]=i; //cout<<" "<<B[d]<<endl;
    }

    map<double,ll>::iterator it1,it2;
    it1=A.begin();
    it2=B.begin();
    tmp=min(it1->first,it2->first);
    if(n>1){
        if(it1->second==it2->second){
            it2++;
            double d1=it1->first+it2->first;
            it2--;
            it1++;
            double d2=it1->first+it2->first;
            tmp=min(tmp,min(d1,d2));
        }
        else{
            tmp=min(tmp,it1->first+it2->first);
        }
    }

    printf("%0.12lf\n",ans+tmp);
    return 0;
}
