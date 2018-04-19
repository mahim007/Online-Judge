#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<string,ll>M;
char s[40];
ll n;

void calculate(){
    map<string,ll>::iterator it;
    for(it=M.begin();it!=M.end();it++){
        string p=it->first;
        double x=(double)it->second*(100.00)/(double)n;
        //x*=100;
        cout<<p<<" ";
        printf("%0.4lf\n",x);
    }
    M.clear();
    n=0;
}

int main(){
    ll T,t,i,j,k;
    scanf("%lld",&T);
    getchar();
    getchar();
    n=0;
    t=1;
    while(gets(s)){
        if(strlen(s)!=0){
            M[s]++;
            n++;
        }
        else{
            calculate();
            if(t<T) puts("");
            t++;
        }
    }
    calculate();
    return 0;
}
