#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct node{
    int endmark,sum=0;
    node *next[2];
    node(){
        endmark=0;
        sum=0;
        for(ll i=0;i<2;i++) next[i]=NULL;
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

    //cur->endmark=1;
}

void del_data(string p,ll sz){ //cout<<p<<" "<<sz<<endl;
    node *cur=root;
    for(ll i=0;i<sz;i++){
        ll id=p[i]-'0';
        if(cur->next[id]==NULL){
            cur->next[id]=new node();
        }

        cur=cur->next[id];
        cur->sum--; //cout<<cur->sum<<"\n";
    }

    //cur->endmark=1;
}

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

void del(node *cur){
    for(ll i=0;i<2;i++){
        if(cur->next[i]!=NULL)
            del(cur->next[i]);
    }

    delete(cur);
}

int main(){
    root=new node();
    ll cs,T,i,j;
    cin>>T;
    for(cs=1;cs<=T;cs++){
        string s,t;
        cin>>s;
        cin>>t;
        for(j=0;j<t.size();j++){
            if((t[j]-'0')%2==1)
                t[j]='1';
            else t[j]='0';
        } //cout<<"t:"<<t<<"\n";
        ll x=18-t.size();
        reverse(t.begin(),t.end());
        for(j=1;j<=x;j++){
            t+='0';
        } //cout<<"t:"<<t<<"\n";
        ll ln=t.size();
        if(s=="+")
        insert_data(t,ln);
        else if(s=="-"){
            del_data(t,ln);
        }
        else{
            ll vv=search_data(t,ln);
            cout<<vv<<"\n";
        }

        s.clear();
        t.clear();
    }


    del(root); //cout<<"at last"<<"\n";
    return 0;
}
