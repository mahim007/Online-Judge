#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll r[100009],c[100009];

int main(){
    ll n,q,i,j,k,ans=0;
    scanf("%lld %lld",&n,&q);
    ans=n*n;
    ll row=n,col=n;
    for(i=1;i<=q;i++){
        ll rr,cc;
        scanf("%lld %lld",&rr,&cc);
        ll f=0;
        ll res=0;
        if(r[rr]==0){
            res+=col;
            //row--;
            f++;
        }
        if(c[cc]==0){
            res+=row;
            //col--;
            f+=2;
        }
        //cout<<"res:"<<res<<endl;
        if(f==3){
            res-=1;
            row--;
            col--;
        }
        else if(f==1) row--;
        else if(f==2) col--;
        ans-=res;
        r[rr]=1;
        c[cc]=1;
        if(ans<0) ans=0;
        printf("%lld ",ans);
    }

    printf("\n");
    return 0;
}
