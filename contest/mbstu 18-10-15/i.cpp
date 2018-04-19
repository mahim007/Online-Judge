#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct node{
    ll tym=-1;
    ll id=-1;
};
node D[13];
ll acc[101][13];

int main(){
    ll n,tm,sm,i,j;
    char v[4],pblm;
    ll tym,team;
    scanf("%lld %lld %lld",&n,&tm,&sm);
    for(i=1;i<=sm;i++){
        scanf("%lld %lld %c %s",&tym,&team,&pblm,v);
        if(v[0]=='Y' && acc[team][pblm-'A'+1]==0){
            D[pblm-'A'+1].id=team;
            D[pblm-'A'+1].tym=tym;
            acc[team][pblm-'A'+1]=1;
        }
    }
    for(i=1;i<=n;i++){
        printf("%c ",64+i);
        if(D[i].id==-1 && D[i].tym==-1){
            printf("- -\n");
        }
        else{
            printf("%lld ",D[i].tym);
            printf("%lld\n",D[i].id);
        }
    }
    return 0;
}
