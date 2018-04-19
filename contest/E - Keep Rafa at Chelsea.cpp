#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
int main(){
    ll T,t,i,j,k,ln,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        s=s+'0';
        for(i=1;i<=n;i++){
            char ch;
            cin>>ch;
            s=s+ch;
        }

        k=0;
        for(i=1;i<=n;i++){
            if(s[i]=='W'){
                k=0;
            }
            else{
                k++;
                if(k==3){
                    j=i;
                    break;
                }
            }
        }

        if(k==3){
            printf("Case %lld: %lld\n",t,j);
        }
        else{
            printf("Case %lld: Yay! Mighty Rafa persists!\n",t);
        }

        s.clear();
    }
    return 0;
}
