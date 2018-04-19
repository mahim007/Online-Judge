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
#define sci(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define scd(n) scanf("%lf",&n)
#define sc scanf
#define pf printf
#define pfi(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define mem(a,n) memset(a,n,sizeof(a))
#define maax 209

int main(){
    double height,up,down,fact;
    ll i,j,k,ans;
    while(scanf("%lf %lf %lf %lf",&height,&up,&down,&fact)==4){
        if(height==0)
            break;
        double climb=0,last=0;
        fact=(up*fact)/100;
        for(i=1;;i++){ //cout<<"day:"<<i<<endl;
            if(i==1){
                last=up; //cout<<"1st last:"<<last<<endl;
                climb+=last; //cout<<"1st climb:"<<climb<<endl;
                if(climb>height){
                    printf("success on day %lld\n",i);
                    break;
                }
            }
            else{
                last=last-fact; //cout<<"else last:"<<last<<endl;
                if(last<0.0){
                    last=0;
                    fact=0;
                }
                climb+=last; //cout<<"else climb:"<<climb<<endl;
                if(climb>height){
                    printf("success on day %lld\n",i);
                    break;
                }
            }
            climb-=down; //cout<<"after down:"<<climb<<endl;
            if(climb<0.0){
                printf("failure on day %lld\n",i);
                break;
            }
        }
    }
    return 0;
}
