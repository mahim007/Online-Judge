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
ll ans=1;
struct node{
    ll point,endmark;
    node *next[2];
    node(){
        point=endmark=0;
        memset(next,NULL,sizeof next);
    }
} *root;

void del(node *cur){
    for(ll i=0;i<2;i++){
        if(cur->next[i])
            del(cur->next[i]);
    }

    delete(cur);
}

void insert_data(string s){
    node *cur=root;
    ll ln=s.size();
    for(ll i=0;i<ln;i++){
        ll d=s[i]-'0';
        if(cur->next[d]==NULL){
            cur->next[d]=new node();
        }

        cur=cur->next[d];
        cur->point++;
        if(cur->endmark) ans=2;
    }

    cur->endmark=1;
    if(cur->point>1) ans=2;
}

int main(){
    ll i,j,k=1,t=1;
    string s;
    //root=new node();
    while(cin>>s){
        if(s[0]=='9' && s.size()==1){
            if(ans==1) printf("Set %lld is immediately decodable\n",t);
            else printf("Set %lld is not immediately decodable\n",t);
            t++;
            del(root);
            ans=1;
            k=1;
        }
        else{
            if(k==1) root=new node();
            k++;
            insert_data(s);
        }
    }

    return 0;
}
