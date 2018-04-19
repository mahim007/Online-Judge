#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s,p;
ll original,usd[15],n,dup;
vector<char>V;
vector<ll>A;
void call(){
    if(V.size()==n){
        ll val=0;
        for(ll i=0;i<n;i++){
            if(V[i]=='+') val++;
            else val--;
        }

        A.push_back(val);
    }

    for(ll i=0;i<n;i++){
        if(usd[i]==0){
            if(V.size()!=i) return;
            usd[i]=1;
            V.push_back('+');
            call();
            usd[i]=0;
            V.pop_back();

            usd[i]=1;
            V.push_back('-');
            call();
            usd[i]=0;
            V.pop_back();
        }
    }
}

int main(){
    //ios_base::sync_with_stdio(false);
    ll i,j,k,lna,lnb;
    cin>>s;
    cin>>p;
    original=dup=0;
    lna=s.size();
    lnb=p.size();
    for(i=0;i<lna;i++){
        if(s[i]=='+') original++;
        else if(s[i]=='-') original--;
    }

    for(i=0;i<lnb;i++){
        if(p[i]=='+') dup++;
        else if(p[i]=='-') dup--;
        if(p[i]=='?') n++;
    }
    if(n>0) call();
    if(A.size()==0){
        if(original==dup) printf("%0.9lf\n",(double)1);
        else printf("%0.9lf\n",(double)0);
    }
    else{
        ll x=0;
        ll asiz=A.size();
        for(i=0;i<asiz;i++){
            if((dup+A[i])==original) x++;
        }

        printf("%0.9lf\n",(double)x/(double)asiz);
    }

    return 0;
}
