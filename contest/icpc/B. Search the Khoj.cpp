#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<string>V;
string str[1009];
int main(){
    ll T,t,i,j,n;
    //char w[19];
    string w;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        //getchar();
        ll x;
        for(i=1;i<=n;i++){
            cin>>str[i];
        }
        //gets(w);
        cin>>w;
        ll ln=w.size();
        ll er=0;
        for(i=1;i<=n;i++){
                er=0;
            for(j=0;j<ln;j++){
                if(str[i][j]!=w[j])
                    er++;
                if(er>1) break;
            }
            if(er<=1){
                V.push_back(str[i]);
            }
        }
        printf("Case %lld:\n",t);
        for(i=0;i<V.size();i++)
            cout<<V[i]<<endl;
        V.clear();
    }
    return 0;
}
