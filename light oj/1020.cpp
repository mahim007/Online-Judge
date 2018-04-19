#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll T,t,d;
    string p;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&d);
        cin>>p;
        printf("Case %lld: ",t);
        if(p=="Alice"){
            if(d==1){
                printf("Bob\n");
                //continue;
            }
            else if(d==2){
                printf("Alice\n");
            }
            else{
                ll n=ceil((double)d/3);
                if(d==n*3 || d==(n*3)-1){
                    printf("Alice\n");
                }
                else{
                    printf("Bob\n");
                }
            }
        }
        else{
            if(d%3==0){
                printf("Alice\n");
            }
            else{
                printf("Bob\n");
            }
        }
    }
    return 0;
}
