#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct node{
    int endmark,sum=0;
    node *next[27];
    node(){
        endmark=0;
        sum=0;
        for(ll i=0;i<26;i++) next[i]=NULL;
    }
}*root;

void insert_data(string p,ll sz){ //cout<<p<<" "<<sz<<endl;
    node *cur=root;
    for(ll i=0;i<sz;i++){
        ll id=p[i]-'0';
        if(cur->next[id]==NULL){
            cur->next[id]=new node();
        }

        cur=cur->next[id];
        cur->sum++; //cout<<"id:"<<id<<" val:"<<cur->sum<<"\n";
    }

    cur->endmark=1;
}

//void del_data(string p,ll sz){ //cout<<p<<" "<<sz<<endl;
//    node *cur=root;
//    for(ll i=0;i<sz;i++){
//        ll id=p[i]-'0';
//        if(cur->next[id]==NULL){
//            cur->next[id]=new node();
//        }
//
//        cur=cur->next[id];
//        cur->sum--; //cout<<cur->sum<<"\n";
//    }
//
//    cur->endmark=1;
//}

int search_data(string p,ll sz){
    node *cur=root;
    for(ll i=0;i<sz;i++){
        ll id=p[i]-'0';
        if(cur->next[id]!=NULL){
            cur=cur->next[id];
        }
        else{
            return 0;
        }
    }

    return cur->sum;
}

void delete_data(node *cur){
    for(ll i=0;i<26;i++){
        if(cur->next[i]!=NULL)
            delete_data(cur->next[i]);
    }

    delete(cur);
}

int main(){
    root=new node();
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        string s,t;
        cin>>s;
        cin>>t;
        for(ll j=0;j<t.size();j++){
            if((t[j]-'0')%2==1)
                t[j]='1';
            else t[j]='0';
        } //cout<<"t:"<<t<<"\n";

        ll x=18-t.size();
        reverse(t.begin(),t.end());
        for(ll j=1;j<=x;j++){
            t+='0';
        } cout<<"t:"<<t<<"\n";
        ll ln=s.size();
        if(s=="+")
        insert_data(t,ln);

        else if(s=="-"){
            del_data(t,ln);
        }
        else{
            ll vv=search_data(t,ln);
            cout<<"ans:"<<vv<<"\n";
        }

        s.clear();
        t.clear();
    }


    delete_data(root);
    return 0;
}
