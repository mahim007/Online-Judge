#include<bits/stdc++.h>
using namespace std;

#define mxn 150009
#define ll long long int

int main(){
    ll T,t,i,j,k,n;

    while(scanf("%lld",&n)==1){
        vector<ll>V;

        if(n==0){
            printf("10\n");
            continue;
        }

//        if(n==1){
//            printf("1\n");
//            continue;
//        }

        ll f=0;
        for(i=9;i>=2;i--){
            while(n%i==0){
                V.push_back(i);
                n=n/i;
                f=1;
            }
        }

        if(n!=1 && f==1){
            printf("-1\n");
            continue;
        }
        else if(n==1 && f==0){
            V.push_back(n);
        }

        if(V.size()==0) printf("-1\n");
        else{
            sort(V.begin(),V.end());
            for(i=0;i<V.size();i++) printf("%lld",V[i]);
            printf("\n");
        }
    }

    return 0;
}
