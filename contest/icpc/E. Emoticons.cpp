#include<bits/stdc++.h>
using namespace std;
string p;
#define ll long long int
int main(){
    ll T,t,i,j,ch,mk,cnt;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        cin>>p;
        cnt=0;
        ch=mk=0;
        ll ln=p.size();
        for(i=0;i<ln;i++){
            if(p[i]=='_'){
                if(ch>=1){
                    mk++;
                }
            }
            else if(p[i]=='^'){
                if(mk>=1 && ch>=1){
                    cnt++;
                    mk--;
                    ch--;
                }
                else if(mk<=0){
                    ch++;
                }
            }
            if(ch==0)
                mk=0;
        }
        printf("Case %lld: %lld\n",t,cnt);
    }
    return 0;
}
