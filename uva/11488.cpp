#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ans;
struct trie{
    ll p;
    trie *next[2];
    trie(){
        p=0;
        memset(next,NULL,sizeof next);
    }
}*root;

void insert_trie(string s){
    trie *cur=root;
    ll ln=s.size();
    for(ll i=0;i<ln;i++){
        ll d=s[i]-'0';
        if(cur->next[d]==NULL){
            cur->next[d]=new trie();
        }

        cur=cur->next[d];
        cur->p++;
        ans=max(ans,cur->p*(i+1));
    }
}

void del(trie *cur){
    for(ll i=0;i<2;i++){
        if(cur->next[i])
            del(cur->next[i]);
    }

    delete(cur);
}

int main(){
    ll T,t,i,j,k,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        ans=-999999999999999;
        root=new trie();
        //getchar();
        for(i=1;i<=n;i++){
            string s;
            cin>>s;
            insert_trie(s);
        }

        if(ans<0) ans=0;
        printf("%lld\n",ans);
        del(root);
    }

    return 0;
}
