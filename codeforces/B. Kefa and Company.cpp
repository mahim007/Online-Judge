#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    ll m,s;
    bool operator < (const data& P) const{
        if(m!=P.m)
            return m<P.m;
        else return s>P.s;
    }
};
data d[100001];
//ll m[100001];
//ll s[100001];
int main(){
    ll i,j,k,mx,cnt;
    ll n,factor;
    scanf("%lld %lld",&n,&factor);
    for(i=0;i<n;i++){
        scanf("%lld %lld",&d[i].m,&d[i].s);
    }
    mx=-1;
    cnt=0;
    sort(d,d+n);
    for(i=0;i<n;i++){ //cout<<"i="<<i<<endl;
        cnt=0;
        for(j=i;j<n;j++){
            if(abs(d[i].m-d[j].m)<factor){
                cnt+=d[j].s; //cout<<s[j]<<" added. cnt="<<cnt<<endl;
            }
            else break;
        }
        if(cnt>mx)
            mx=cnt;
    }
    printf("%lld\n",mx);
    return 0;
}
