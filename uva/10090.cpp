#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll m1,m2,n;

void solve(ll a,ll b,ll p){ cout<<"a:"<<a<<" b:"<<b<<endl;
    ll l=1;
    ll r=n/a;
    ll mid; cout<<"l:"<<l<<" and r:"<<r<<endl;
    while(l<=r){
        mid=(l+r)>>1; cout<<"mid:"<<mid<<endl;
        ll k=(n-(mid*a)); cout<<"k:"<<k<<endl;
        if(k%b==0){
            m1=mid;
            m2=(n-(mid*a))/b;
        }
        if(k>=b*2){
            l=mid+1; cout<<"and l:"<<l<<endl; //system("pause");
        }
        else{
            r=mid-1;
        }
    }
    if(p==2){
        swap(m1,m2);
    }
}

int main(){
    ll c1,n1,c2,n2;
    while(scanf("%lld",&n)==1){
        scanf("%lld %lld",&n1,&c1);
        scanf("%lld %lld",&n2,&c2);
        m1=-1;
        m2=-1;
        //double unit1,unit2;
        //unit1=(double)c1/n1; cout<<"unit1:"<<unit1<<endl;
        //unit2=(double)c2/n2; cout<<"unit2:"<<unit2<<endl;
       // if(unit1>unit2){
            solve(c1,c2,1); printf("%lld %ld\n",m1,m2); system("pause");
       // }
       // else{
            //if(m1==-1 && m2==-1)
            solve(c2,c1,2); printf("%lld %ld\n",m1,m2);
       // }
        if(m1==-1 && m2==-1){
            printf("failed\n");
        }
        else{
            printf("res %lld %ld\n",m1,m2);
        }
    }
    return 0;
}
