#include<bits/stdc++.h>
using namespace std;
#define ll long long int
char p[209],q[200];
int main(){
    ll pw=0,i,j,k;
    scanf("%s",p);
    //cout<<p<<" "<<pw<<endl;
    ll ln=strlen(p);
    for(i=ln;i<109;i++) p[i]='0';
    p[i]='\0';
    for(i=0;i<ln;i++){
        if(p[i]=='e'){
            p[i]='0';
            break;
        }
    }
    j=k=i;
    i++;
    for(;i<ln;i++){
        pw=pw*10+(p[i]-'0');
        p[i]='0';
    } //cout<<pw<<endl;

    for(i=0;i<ln;i++){
        if(p[i]=='.') break;
    }

    k=i;

    for(;pw>0;k++){
        swap(p[k],p[k+1]);
        pw--;
    } //cout<<"after dot:"<<p<<endl;
    if(k>ln) ln=k; //cout<<"ln changed:"<<ln<<endl;

    ll f=0;
    for(i=0;p[i]=='0';i++){
        p[i]='x';
    } //cout<<"samne:"<<p<<endl;
    if(p[i]=='.' && p[i-1]=='x') p[i-1]='0';

    for(i=108;p[i]=='0';i--){
        p[i]='x'; //cout<<"x  ...\n";
    } //cout<<"pichon:"<<p<<endl;

    if(p[i]=='.') p[i]='x';

    for(i=0;i<109;i++){
        if((p[i]>='0' && p[i]<='9')|| p[i]=='.') cout<<p[i];
    }

    cout<<"\n";
    return 0;
}
