#include<bits/stdc++.h>
using namespace std;
#define ll long long int

map<string,ll>M;

int main(){
    M["January"]=1;
    M["February"]=2;
    M["March"]=3;
    M["April"]=4;
    M["May"]=5;
    M["June"]=6;
    M["July"]=7;
    M["August"]=8;
    M["September"]=9;
    M["October"]=10;
    M["November"]=11;
    M["December"]=12;


    ll T,t,i,j,k,ad,ay,bd,by;
    char am[20],bm[20];

    scanf("%lld",&T);
    getchar();

    for(t=1;t<=T;t++){
        scanf("%s %lld, %lld",am,&ad,&ay);
        //printf("month=%s date=%lld year=%lld\n",am,ad,ay);
        getchar();
        scanf("%s %lld, %lld",bm,&bd,&by);
        getchar();

        ll f1=0,f2=0;
        ll ans=((by/4)-(by/100)+(by/400))-((ay/4)-(ay/100)+(ay/400));

        if(M[am]<=2){
            if((ay%400==0) || ((ay%4==0)&&(ay%100!=0))) ans++;
        }

        if(M[bm]<=2){
            if(M[bm]==1 || (M[bm]==2 && bd<=28))
            if((by%400==0) || ((by%4==0)&&(by%100!=0))) ans--;
        }

        printf("Case %lld: %lld\n",t,ans);
    }

    return 0;
}
