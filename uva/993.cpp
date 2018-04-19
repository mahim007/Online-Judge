#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define maax 100009
//bool tag[maax];
vector<ll>V;
vector<ll>P,a,b;
/*
void generator(){
    tag[0]=tag[1]=1;
    for(ll i=4;i<maax;i++){
        tag[i]=1;
    }
    ll root=sqrt(maax)+1;
    for(ll i=3;i<=root;i=i+2){
        if(tag[i]==0){
            for(ll j=i*i;j<maax;j=j+i+i){
                tag[j]=1;
            }
        }
    }
    for(ll i=1;i<maax;i++){
        if(tag[i]==0){
            V.push_back(i);
        }
    }
}  */

int main(){ //freopen("993 output","w",stdout);
    //generator();
    V.push_back(2);
    V.push_back(3);
    V.push_back(5);
    V.push_back(7);
    ll T,t,i,j,n,s,x;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        if(n==1){
            printf("1\n");
            continue;
        }
        if(n==0){
            printf("10\n");
            continue;
        }
        s=n;
        ll root=sqrt(n);
        P.clear();
        x=1;
        for(i=0;V[i]<=root && i<4;i++){
            if(n%V[i]==0){
                while(n%V[i]==0){
                    P.push_back(V[i]);
                    n=n/V[i];
                }
            }
        }
        if(n!=1 && n<=7){
            P.push_back(n);
        }
        else if(n!=1 && n>7){
            printf("-1\n");
            continue;
        }
        //sort(P.begin(),P.end());
        ll sz=P.size();
        a=P;
        for(i=1;i<sz;i++){
            if(a[i]*a[i-1]<=9){
                a[i]=a[i]*a[i-1];
                a[i-1]=99999999999999999;
            }
        }
        sort(a.begin(),a.end());
        b=P;
        for(i=sz-1;i>=1;i--){
            if(b[i]*b[i-1]<=9){
                b[i-1]=b[i]*b[i-1];
                b[i]=99999999999999999;
            }
        }
        sort(b.begin(),b.end());
        if(a[0]<b[0]){
        for(i=0;i<a.size();i++){
            if(a[i]<=9)
            printf("%lld",a[i]);
        }cout<<endl;
        }
        else{
        for(i=0;i<b.size();i++){
            if(b[i]<=9)
            printf("%lld",b[i]);
        }
        printf("\n");
        }
    }
    return 0;
}
