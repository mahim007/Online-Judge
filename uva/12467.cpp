#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char s[1000009];
int main(){ //freopen("12467 output","w",stdout);
    ll t,T,i,j,n,ln;
    scanf("%lld",&T);
    getchar();
    for(t=1;t<=T;t++){
        gets(s);
        ln=strlen(s); //cout<<ln<<endl;
        string m,mx;
        for(i=0,j=ln-1;j>=0;j--){
            if(s[i]==s[j]){
                m+=s[i];
                i++; //cout<<m<<endl;
            }
            else{
                if(m.size()>mx.size()){
                    mx=m;
                }
                m.clear();
                i=0;
                if(s[i]==s[j]){
                    m+=s[i];
                    i++;
                }
            }
        }
        //if(m.size()==0 &&mx.size()==0){
        //    mx=s[0];
        //}
        //else if(m.size()*2==ln && mx.size()==0){
        //    mx=s;
        //}
        if(m.size()>mx.size()){
            mx=m;
        }
        reverse(mx.begin(),mx.end());
        cout<<mx<<endl;
    }
    return 0;
}
