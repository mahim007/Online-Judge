#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct data{
    char ch;
    ll pos;
};
vector<data>V[30];
string s,p;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,i,j,e=0;
    s="9";
    p="9";
    string g;
    cin>>n;
    cin>>g;
    s+=g;
    cin>>g;
    p+=g;
    for(i=1;i<=n;i++){
        if(s[i]!=p[i]){
            data D;
            D.ch=s[i];
            D.pos=i;
            ll f=0;
            for(j=0;j<V[p[i]-'a'].size();j++){
                if(V[p[i]-'a'][j].ch==s[i]){
                    f=1;
                    break;
                }
            }
            if(!f)
            V[p[i]-'a'].push_back(D);
            e++;
        }
    }

//    for(i=0;i<30;i++){ cout<<(char)('a'+i)<<" :";
//        for(j=0;j<V[i].size();j++) cout<<"("<<V[i][j].ch<<","<<V[i][j].pos<<") ";
//        cout<<"\n";
//    }

    for(i=1;i<=n;i++){
        if(s[i]!=p[i]){
           if(V[s[i]-'a'].size()){
            for(j=0;j<V[s[i]-'a'].size();j++){
              if(V[s[i]-'a'][j].ch==p[i]){
                cout<<e-2<<"\n";
                cout<<i<<" "<<V[s[i]-'a'][j].pos<<"\n";
                return 0;
              }
           }
        }
    }
    }
    for(i=1;i<=n;i++){
        if(s[i]!=p[i]){
            if(V[s[i]-'a'].size()){
                cout<<e-1<<"\n";
                cout<<i<<" "<<V[s[i]-'a'][0].pos<<"\n";
                return 0;
            }
        }
    }

    cout<<e<<"\n";
    cout<<-1<<" "<<-1<<"\n";

    return 0;
}
