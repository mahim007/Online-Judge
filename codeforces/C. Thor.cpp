#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>V;
queue<ll>Q;
ll unread[300009],read[300009];

int main(){
    ll n,q,i,j,k,cnt=0,t,d,pre=0;
    scanf("%lld %lld",&n,&q);
    for(k=1;k<=q;k++){
        scanf("%lld %lld",&t,&d);
        if(t==1){
            unread[d]++;
            Q.push(d);
            cnt++;
            printf("%lld\n",cnt);
        }
        else if(t==2){
            cnt-=unread[d];
            read[d]+=unread[d];
            unread[d]=0;
            printf("%lld\n",cnt);
        }
        else{
            ll pp=pre;
            pre=max(pre,d);
            d=max(d-pp,0ll);
            while(d--){
               ll p=Q.front();
               Q.pop();
               if(!read[p]){
                    cnt--;
                    unread[p]--;
               }
               else{
                   read[p]--;
               }
            }

            printf("%lld\n",cnt);
        }
    }

    return 0;
}
