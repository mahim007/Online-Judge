#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<string,int>M;
string p;
int main(){
    ll n,i,j,k;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        cin>>p;
        if(M[p]==0){
            printf("OK\n");
            M[p]=1;
        }
        else{
            string q;
            char num[20];
            ll val=M[p];
            M[p]+=1;
            sprintf(num,"%lld",val);
            q=p+num;
            M[q]=1;
            cout<<q<<endl;
        }
    }
    return 0;
}
