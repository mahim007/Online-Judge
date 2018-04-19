#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string str[109];
int main(){
    ll n,i,j,k,l,cnt,mx;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        cin>>str[i];
    }

    mx=-1;
    for(i=0;i<26;i++){
        for(j=i;j<26;j++){
            cnt=0;
            for(k=1;k<=n;k++){
                ll ok=1;
                for(l=0;l<str[k].size();l++){
                    ll ch=str[k][l]-'a';
                    if(ch!=i && ch!=j){
                        ok=0;
                        break;
                    }
                }
                if(ok==1){
                    cnt+=str[k].size();
                }
            }
            if(mx<cnt)
                mx=cnt;
        }
    }
    printf("%lld\n",mx);
    return 0;
}
