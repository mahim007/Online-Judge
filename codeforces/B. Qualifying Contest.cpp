#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct node{
    ll point;
    string name;
    bool operator < (const node & p) const{
        return point>p.point;
    }
};

vector<node>V[10009];

int main(){
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++){
        string nm;
        ll rg,pnt;
        cin>>nm>>rg>>pnt;
        node D;
        D.name=nm;
        D.point=pnt;
        V[rg].push_back(D);
    }

    for(ll i=1;i<=m;i++){
        sort(V[i].begin(),V[i].end());
        vector<string>s;
        if(V[i].size()==2){
            cout<<V[i][0].name<<" "<<V[i][1].name<<endl;
        }
        else if(V[i].size()>2){
            if(V[i][0].point==V[i][1].point && V[i][1].point==V[i][2].point){
                cout<<"?"<<endl;
            }
            else if(V[i][1].point==V[i][2].point){
                cout<<"?"<<endl;
            }
            else{
                cout<<V[i][0].name<<" "<<V[i][1].name<<endl;
            }
        }
    }
}
