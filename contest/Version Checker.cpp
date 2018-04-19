#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[4];
ll b[4];
string p,q;
int main(){
    ll i,j,k,n,flag,ans;
    while(cin>>p>>q){
        a[1]=a[2]=a[3]=0;
        b[1]=b[2]=b[3]=0;
        k=1;
        for(i=0;i<p.size();i++){
            if(p[i]=='.'){
                k++;
                continue;
            }

            a[k]=a[k]*10+(p[i]-'0');
        }

        k=1;
        for(i=0;i<q.size();i++){
            if(q[i]=='.'){
                k++;
                continue;
            }

            b[k]=b[k]*10+(q[i]-'0');
        }

        if(a[1]==b[1] && a[2]==b[2] && a[3]==b[3]){
            if(p.size()>=q.size()) cout<<p<<endl;
            else cout<<q<<endl;
        }
        else{
            if(a[1]>b[1]){
                cout<<p<<endl;
            }
            else if(a[1]<b[1]){
                cout<<q<<endl;
            }
            else if(a[2]>b[2]){
                cout<<p<<endl;
            }
            else if(a[2]<b[2]){
                cout<<q<<endl;
            }
            else if(a[3]>b[3]){
                cout<<p<<endl;
            }
            else if(a[3]<b[3]){
                cout<<q<<endl;
            }
        }
    }

    return 0;
}
