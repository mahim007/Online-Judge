#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll flag;
struct node{
    ll endmark;
    node *next[10];
    ll footprint;
    node(){
        endmark=footprint=0;
        for(ll i=0;i<10;i++) next[i]=NULL;
    }
}*root;

void insert_data(string s){
    node *cur=root;
    ll sz=s.size();
    for(ll i=0;i<sz;i++){
        ll id=s[i]-'0';
        if(cur->next[id]==NULL){
            cur->next[id]=new node();
        }

        cur=cur->next[id];
        cur->footprint++;
        if(cur->endmark) flag=1;
    }

    cur->endmark=1;
    if(cur->footprint>1) flag=1;
}

void del(node *cur){
    for(ll i=0;i<10;i++){
        if(cur->next[i]){
            del(cur->next[i]);
        }
    }

    delete(cur);
}

int main(){
    ll T,t,i,j,k,ans,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        root=new node();
        for(i=1;i<=n;i++){
            string s;
            cin>>s;
            insert_data(s);
        }

        if(flag){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }

        del(root);
        flag=0;
    }

    return 0;
}
