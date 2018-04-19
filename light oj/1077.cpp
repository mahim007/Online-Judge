#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,i,j,x1,x2,y1,y2,res;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        if(abs(x1-x2)==abs(y1-y2)){
            res=abs(x1-x2)+1;
        }
        else if((x1==x2) || (y1==y2)){
            if(x1==x2){
                res=abs(y1-y2)+1;
            }
            else{
                res=abs(x1-x2)+1;
            }
        }
        else{
            ll n,m;
            n=abs(y2-y1); //cout<<n<<endl;
            m=abs(x2-x1); //cout<<m<<endl;
            ll gcd=__gcd(n,m); //cout<<gcd<<endl;
            res=gcd+1;
        }

        printf("Case %lld: %lld\n",t,res);
    }
    return 0;
}
