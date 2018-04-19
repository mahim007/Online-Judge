#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    ll h1,m1,h2,m2;
    bool operator < (const data& p) const{
        if(h2==p.h2){
            return m2>p.m2;
        }
        else{
            return h2>p.h2;
        }
    }
};
vector<data>tym;
//ll tym[101][4];
int main(){
    ll nap,i,j,k,l,m,n,tt,fh,fm,t=1;
    char str[300];
    ll sh=10;
    ll sm=0;
    ll endh=18;
    ll endm=0;
    while(scanf("%lld",&n)==1){
        ll a,b,c,q;
        for(i=1;i<=n;i++){
            scanf("%lld:%lld %lld:%lld",&a,&b,&c,&q);
            gets(str);
            data d;
            d.h1=a;
            d.m1=b;
            d.h2=c;
            d.m2=q;
            tym.push_back(d);
        }
        sort(tym.begin(),tym.end());
        reverse(tym.begin(),tym.end());
        nap=(tym[0].m1-sm)+((tym[0].h1-sh)*60); //cout<<"napp:"<<nap<<endl;
        fh=10;
        fm=0;
        for(i=1;i<n;i++){
            tt=(tym[i].m1>=tym[i-1].m2)? ((tym[i].m1-tym[i-1].m2)+(tym[i].h1-tym[i-1].h2)*60) : ((tym[i].m1+60-tym[i-1].m2)+(tym[i].h1-(tym[i-1].h2+1))*60);
            if(tt>nap){
                nap=tt;
                fh=tym[i-1].h2;
                fm=tym[i-1].m2;
            } //cout<<"nap:"<<nap<<endl;
        }
        ll p=0;
        if(tym[n-1].m2>0){
            endm=60-tym[n-1].m2;
            p=1;
        }
        else{
            endm=0;
            p=0;
        }
        tt=((endh-(tym[n-1].h2+p))*60)+endm;
        if(tt>nap){
            nap=tt;
            fh=tym[n-1].h2;
            fm=tym[n-1].m2;
        }
        if(n==0){
            nap=480;
        }
        if(nap/60>=1){
            printf("Day #%lld: the longest nap starts at %lld:%02lld and will last for %lld hours and %lld minutes.\n",t,fh,fm,(ll)(nap/60),(ll)(nap%60));
        }
        else{
            printf("Day #%lld: the longest nap starts at %lld:%02lld and will last for %lld minutes.\n",t,fh,fm,nap);
        }
        t++;
        tym.clear();
    }
    return 0;
}
