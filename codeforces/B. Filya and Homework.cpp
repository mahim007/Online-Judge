#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M;

int main(){
    ll n,i,j,d;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&d);
        M[d]=1;
    }

    if(M.size()>3){
        printf("NO\n");
    }
    else{
        if(M.size()==1 || M.size()==2){
            printf("YES\n");
        }
//        else if(M.size()==2){
//            map<ll,ll>::iterator it=M.begin();
//            ll x=it->first; //cout<<x<<"\n";
//            it++;
//            ll p=it->first;
//            ll z=abs(x-p);
//            if(z%2==0){
//                printf("YES\n");
//            }
//            else{
//                printf("NO\n");
//            }
//        }
        else{
            map<ll,ll>::iterator it=M.begin();
            ll x=it->first; //cout<<x<<"\n";
            it++;
            ll p=it->first;
            it++;
            ll y=it->first; //cout<<x<<"\n";
            ll z=abs(x-y)/2;
            if(x+z==p && y-z==p){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }

    return 0;
}
