#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<char,int>M;
char str[509];
int main(){
    ll T,t,i,j,ln,cnt,n,k;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld %lld",&n,&k);
        getchar();
        gets(str);
        ln=strlen(str);
        cnt=0;
        //M[str[0]]++;
        for(i=0;i<k;i++){
            if(M[str[i]]>=1){
                cnt++;
                M[str[i]]++;
            }
            else
                M[str[i]]=1;
        }
        //cout<<cnt<<endl;cout<<"i:"<<i<<endl;
        for(j=0;i<ln;i++,j++){
            if(M[str[i]]>=1){
                cnt++;
                M[str[i]]++; //cout<<str[i]<<" milse\n";
            }
            else{
                M[str[i]]++; //cout<<str[i]<<" mile nai\n";
            }
            M[str[j]]--;
        }
        printf("Case %lld: %lld\n",t,cnt);
        M.clear();
    }
    return 0;
}
