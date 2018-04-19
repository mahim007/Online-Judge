#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll orr[100];
ll andd[100];
vector<ll>p,q;
int main(){
    ll a,b,n,i,j,mm,nn;
    ll T,t=1;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&a,&b);
        if(b<=a)
            swap(a,b);
        ll x=a;
        while(x){
            ll m=x&1;
            p.push_back(m);
            x=x>>1;
        }
        reverse(p.begin(),p.end());
        x=b;
        while(x){
            ll m=x&1;
            q.push_back(m);
            x=x>>1;
        }
        reverse(q.begin(),q.end());
        if(q.size()>p.size()){
            mm=0; //cout<<"q siz:"<<q.size()<<endl;
            for(i=0;i<q.size();i++){
                mm=mm+(1<<i); //cout<<mm<<endl;
            }
            nn=0;
        }
        else if(q.size()==p.size()){
            for(i=0;i<q.size();i++){
                if(p[i]==q[i]){
                    orr[i]=p[i];
                    andd[i]=p[i];
                }
                else
                    break;
            }
            for(;i<q.size();i++){
                orr[i]=1;
                andd[i]=0;
            }
            ll p=0;
            mm=nn=0;
            i--;
            for(;i>=0;i--,p++){
                mm=mm+orr[i]*pow(2,p);
                nn=nn+andd[i]*pow(2,p);
            }
        }
        printf("Case %lld: %lld %lld\n",t,mm,nn);
        p.clear();
        q.clear();
    }
    return 0;
}
