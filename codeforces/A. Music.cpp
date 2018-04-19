#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,q,s,cnt=1,i,k;
    scanf("%lld %lld %lld",&n,&s,&q);
    k=q;
    while(s<n){
        for(i=1;i<=s;i++,k++){
            if(k%q==0){
                s+=q-1; //cout<<s<<endl; //system("pause");
            }
        }
        if(s>=n){
            break;
        }
        else{
            cnt++;
            i--;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
