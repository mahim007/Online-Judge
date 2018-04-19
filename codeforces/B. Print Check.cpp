#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//ll arr[5009][5009];

struct row{
    ll last;
    ll color;
};
row R[5009];


struct col{
    ll last;
    ll color;
};
col C[5009];


int main(){
    ll n,m,k,i,j,x,y;
    cin>>n>>m>>k;
    for(i=1;i<=k;i++){
        ll op;
        scanf("%lld %lld %lld",&op,&x,&y);
        if(op==1){
            R[x].last=i;
            R[x].color=y;
        }
        if(op==2){
            C[x].last=i;
            C[x].color=y;
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(R[i].last>C[j].last){
                cout<<R[i].color<<" ";
            }
            else{
                cout<<C[j].color<<" ";
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
