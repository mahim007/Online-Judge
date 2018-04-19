#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char s[1009];
struct data{
    ll val,cnt;
    bool operator <(const data& p)const{
        if(cnt==p.cnt){
            return val>p.val;
        }
        else{
            return cnt<p.cnt;
        }
    }
};
vector<data>V;

int main(){
    ll ln,i,j,mx,t=1;
    while(gets(s)){
        ln=strlen(s);
        for(i=32;i<=128;i++){
            data d;
            d.val=i;
            d.cnt=0;
            //ll f=0;
            for(j=0;j<ln;j++){
                ll p=0;
                p=s[j];
                if(p==i){
                    d.cnt++;
                }
            }
            if(d.cnt>0){
                V.push_back(d);
            }
        }
        if(t>1){
            printf("\n");
        }
        sort(V.begin(),V.end());
        for(i=0;i<V.size();i++){
            printf("%lld %lld\n",V[i].val,V[i].cnt);
        }
        V.clear();
        t++;
    }
    return 0;
}
