#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <sstream>
using namespace std;
#define ll long long int
#define mx 1009
string st[mx];
struct trie{
    ll point,endmark;
    trie *next[27];
    trie(){
        point=endmark=0;
        memset(next,NULL,sizeof next);
    }
} *root;

void insert_trie(string s){
    trie *cur=root;
    ll ln=s.size();
    for(ll i=0;i<ln;i++){
        ll d=s[i]-'a';
        if(cur->next[d]==NULL){
            cur->next[d]=new trie();
        }

        cur=cur->next[d];
        cur->point++;
    }

    cur->endmark=1;
}

void search_data(string s){
    trie *cur=root;
    ll ln=s.size();
    for(ll i=0;i<ln;i++){
        //cout<<s[i];
        ll d=s[i]-'a';
        cur=cur->next[d];
        cout<<s[i];
        if(cur->point==1)
            break;
    }
}

void del(trie *cur){
    for(ll i=0;i<27;i++){
        if(cur->next[i])
            del(cur->next[i]);
    }

    delete(cur);
}

int main(){
    ll n,k=0;
    root=new trie();
    string s;
    while(cin>>s){
        k++;
        st[k]=s;
        insert_trie(s);
    }

        for(ll i=1;i<=k;i++){
             s=st[i];
            cout<<s<<" ";
            search_data(s);
            cout<<endl;
        }
    del(root);
    return 0;
}
