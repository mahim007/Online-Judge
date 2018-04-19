#include<bits/stdc++.h>
using namespace std;

#define ll long long int
char s[10];
ll taken[10];
ll len,cnt,q;
vector<char>V;
map<ll,ll>M;

ll isprime(ll n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;

    for(ll i=3;i*i<=n;i++){
        if(n%i==0) return 0;
    }

    return 1;
}

void fun(ll tot){
    if(tot==q){
        ll num=0;
        for(ll i=0;i<tot;i++){
            num=num*10+(V[i]-'0');

            if(M.find(num)==M.end()){
               if(isprime(num)){
                    cnt++;
                    M[num]=1;
               }
               else{
                M.erase(num);
               }
            }
        }

        return;
    }

    for(ll i=0;i<len;i++){
        if(taken[i]==0){
            taken[i]=1;
            V.push_back(s[i]);
            fun(tot+1);
            taken[i]=0;
            V.pop_back();
        }
    }
}

int main(){
    ll T,t;
    ll i,j,k;

    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(s);
        len=strlen(s);
        cnt=0;
        for(i=1;i<=len;i++){
            q=i;
            fun(0);
        }

        printf("%lld\n",cnt);
        V.clear();
        M.clear();
    }
    return 0;
}
