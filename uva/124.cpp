#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char inpt[109];
string s,p;
map<pair<char,char>,ll>M;
vector<char>V;
ll n,usd[29];

void call(){
    if(V.size()==n){
        for(ll i=0;i<n;i++) printf("%c",V[i]);
        printf("\n");
        return;
    }

    for(ll i=0;i<n;i++){
        ll f=1;
        for(ll j=0;j<n;j++){
            if(M[make_pair(p[j],p[i])] && usd[j]==0){
                f=0;
                break;
            }
        }

        if(f && usd[i]==0){
            usd[i]=1;
            V.push_back(p[i]);
            call();
            usd[i]=0;
            V.pop_back();
        }
    }
}

int main(){
    ll i,j,k,t=1,ln,m;
    while(gets(inpt)){
        ln=strlen(inpt);
        n=floor(ln/2)+1; //cout<<"n:"<<n<<endl;
        for(i=0;i<ln;i++){
            if(inpt[i]>='a' && inpt[i]<='z')
                p+=inpt[i];
        }

        gets(inpt);
        m=strlen(inpt);
        for(i=0;i<m;i=i+4){
            char a,b;
            a=inpt[i];
            b=inpt[i+2];
            M[make_pair(a,b)]=1;
        }

        sort(p.begin(),p.end());
        memset(usd,0,sizeof usd);
        if(t>1) printf("\n");
        call();
        p.clear();
        M.clear();
        V.clear();
        t++;
    }
}
