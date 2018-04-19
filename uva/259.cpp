#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll cap[30];
ll vis[10];
vector<ll>V[30];
ll match[10];
char s[15]; ll t=1;

ll kuhn(ll u){
    for(ll i=0;i<V[u].size();i++){
        ll v=V[u][i];
        if(vis[v]) continue;
        vis[v]=1;
        if(match[v]==-1){
            match[v]=u;
            return 1;
        }
        else if(kuhn(match[v])){
            match[v]=u;
            return 1;
        }
    }

    return 0;
}

ll bpm(){
    memset(match,-1,sizeof match);
    for(ll i=0;i<26;i++){
        while(cap[i]--){
            memset(vis,0,sizeof vis);
            if(!kuhn(i)) return 0;
        }
    }

    return 1;
}

void calculate(){
    ll ans=bpm();
    //cout<<"case "<<t++<<" ";
    if(ans==0){
        printf("!\n");
    }
    else{
        for(ll i=0;i<10;i++){
            if(match[i]==-1) printf("_");
            else printf("%c",match[i]+'A');
        }
        printf("\n");
    }

    for(ll i=0;i<30;i++) V[i].clear();
    memset(cap,0,sizeof cap);
}

int main(){
    //freopen("259a output","w",stdout);
    char ch;
    while(gets(s)){ //cout<<s<<endl;
        ll ln=strlen(s);
        if(ln==0){
             calculate();
             //gets(s);
        }
        else{
        ll x=s[0]-'A';
        cap[x]+=s[1]-'0';
        for(ll i=3;i<ln;i++){
            if(s[i]>='0' && s[i]<='9'){
                V[x].push_back(s[i]-'0');
            }
        }
        }
    } calculate();

    return 0;
}
