#include <string.h>
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
#include<cstdio>
using namespace std;
#define ll long long int
//vector<ll>V;
int main(){
    ll T,t,i,j,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        n=abs(n);
        for(i=0;i<n;i++){
            printf("%lld ",i);
        }
        printf("%lld\n",i);
    }
    return 0;
}
