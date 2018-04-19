#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <sstream>
using namespace std;
#define ll long long int
vector<ll>tem[50009];
//ll taken[10009];
ll cntr[10009];
int main(){
    ll t=1;
    ll i,j,k,a,b;
    ll ans,h,r;
    while(scanf("%lld %lld",&h,&r)==2){
        if(h==0 && r==0)
            break;
        for(i=1;i<=r;i++){
            scanf("%lld %lld",&a,&b);
            tem[a].push_back(b);
            tem[b].push_back(a);
        }
        vector<ll>nt,tk;
        ans=1;
        ll cnt;
        for(i=1;i<=h;i++){
            cnt=0;
            for(j=1;j<=h;j++){
                if(i==j) continue;
                if(tem[j][i]==1){
                    cnt++;
                }
            }
            cntr[i]=cnt; //cout<<i<<" ->"<<cntr[i]<<endl;
            tk.push_back(i);
        }

        for(i=0;i<tk.size();i++){
            for(j=0;j<tk.size();j++){
                if(i==j) continue;
                //cout<<"eibar "<<tk[i]<<" "<<tk[j]<<endl;
                if(tem[tk[i]][tk[j]]!=1){
                    if(cntr[tk[i]]<=cntr[tk[j]]){
                        nt.push_back(tk[i]); //cout<<tk[i]<<" bad gelo !!!:("<<endl;
                        tk.erase(tk.begin()+i);
                        i--;
                        break;
                    }
                    else{
                        nt.push_back(tk[j]); //cout<<tk[j]<<" bad gelo :("<<endl;
                        tk.erase(tk.begin()+j);
                        j--;
                        continue;
                    }

                }
            }
        }

        ans=1;
        for(i=0;i<nt.size();i++){
            for(j=0;j<nt.size();j++){
                if(i==j) continue;
                if(tem[nt[i]][nt[j]]==1){
                    ans=0;
                    break;
                }
            }
            if(ans==0) break;
        }
        if(ans==1)
            printf("Y\n");
        else
            printf("N\n");
            t++;
        memset(tem,0,sizeof tem);
    }
    return 0;
}
