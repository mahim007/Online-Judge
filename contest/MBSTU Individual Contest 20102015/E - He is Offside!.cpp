#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll a,d,attack,d1,d2,i,j;
    while(scanf("%lld %lld",&a,&d)==2){
        if(a==0 && d==0)
            break;
        ll x;
        attack=99999999999;
        for(i=1;i<=a;i++){
            scanf("%lld",&x);
            if(x<attack)
                attack=x;
        }

        d1=d2=9999999999;
        for(i=1;i<=d;i++){
            scanf("%lld",&x);
            if(x<=d1){
                d2=d1;
                d1=x;
            }
            else if(x>d1 && x<d2){
                d2=x;
            }
        } //cout<<attack<<" "<<d1<<" "<<d2<<endl;

        if(attack<d1 || attack<d2){
            printf("Y\n");
        }
        else if(attack==d1 && attack==d2)
            printf("N\n");
        else if(attack==d2 && attack>=d1)
            printf("N\n");
        else
            printf("N\n");
    }
    return 0;
}
