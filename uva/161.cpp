#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
int main(){
    ll i,j,k,n,d;
    ll cnt;
    while(1){
        cnt=0;
        while(scanf("%lld",&d)==1){
            if(d==0 && cnt!=-1){
                cnt++;
            }
            else if(d==0 && cnt==-1){
                break;
            }
            else{
                cnt=-1;
                V.push_back(d);
            }
            if(cnt>=3){
                break;
            }
        }
        if(cnt>=3){
            break;
        }

        ll flag;
        ll tym,t;
        ll sz=V.size();
        sort(V.begin(),V.end());
        tym=V[0]*2;
        for(i=tym;i<=18000;i++){
            flag=1;
            t=i;
            for(j=0;j<sz;j++){
                if((t%(2*V[j]))<(V[j]-5)){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==0){
                continue;
            }
            else{
                if(1){
                    ll tt=t/3600;
                    printf("%02lld:",tt);
                    t=t-(tt*3600);
                }
                if(1){
                    ll tt=t/60;
                    printf("%02lld:",tt);
                    t=t-(tt*60);
                }
                printf("%02lld\n",t);
                break;
            }
        }
        if(i>18000){
            printf("Signals fail to synchronise in 5 hours\n");
        }
        V.clear();
    }
    return 0;
}
