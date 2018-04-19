#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s,p;
map<char,ll>M;
ll ln1,ln2;

ll call(ll last,char ch){
    for(ll i=last+1;i<ln1;i++){
        if(s[i]==ch){
            return i;
        }
    }

    return -1;
}

int main(){
    ll n,i,j,k,f=1;
    cin>>s;
    cin>>p;
    ln1=s.size();
    for(i=0;i<ln1;i++){
        M[s[i]]++;
    }

    ln2=p.size();
    for(i=0;i<ln2;i++){
        if(M[p[i]]==0){
            f=0;
            break;
        }
        else{
            M[p[i]]--;
        }
    }

    if(f==0){
        cout<<"need tree\n";
    }
    else{
        ll last=-1,ff=1;;
        for(i=0;i<ln2;i++){
            ll d=call(last,p[i]);
            if(d==-1){ //cout<<"now:"<<p[i]<<endl;
                if(ln1==ln2) printf("array\n");
                else printf("both\n");
                ff=0;
                return 0;
            }
            last=d;
        }

        if(ff && ln1!=ln2) printf("automaton\n");
        else if(ff && ln1==ln2) printf("array\n");
    }

    return 0;
}
