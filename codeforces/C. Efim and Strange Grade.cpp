#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 200009

string s;
ll n;

ll find_pos(){
    ll dot=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='.') dot=1;
        else if(dot==1 && s[i]>='5') return i;
    }

    return mxn;
}

void cutting_edge(){
    ll X=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='x') X=1;
        if(X==1) s[i]='x';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll i,j,k,t,add=0;
    cin>>n>>t;
    cin>>s;
    ll pos=find_pos();
    if(pos==mxn){
        cout<<s<<"\n";
    }
    else{
        k=pos;
        //s[k]='x';
        while(s[k]>='5' && s[k]<='9' && t>=1){
            s[k]='x';
            if(s[k-1]>='0' && s[k-1]<='8'){
                s[k-1]++;
            }
            else if(s[k-1]=='9') t++;
            else if(s[k-1]=='.'){
                add=1;
            }

            k--;
            t--;
        }

        if(s[k]=='.'){
            s[k]='x';
            k--;
            while(k>=0){
                if(s[k]>='0' && s[k]<='8'){
                    s[k]+=add;
                    add=0;
                }
                else if(s[k]=='9' && add==1){
                    s[k]='0';
                }

                k--;
            }
        }

        cutting_edge();
        if(add==1) cout<<1;
        for(i=0;i<n;i++){
            if(s[i]=='x') break;
            else cout<<s[i];
        }

        cout<<"\n";
    }

    return 0;
}
