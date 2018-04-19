#include<bits/stdc++.h>
using namespace std;

#define i64 long long int
i64 data[10009];
multimap<i64,bool>M;

int main()
{
    i64 n,cnt=0,a,b,i,j,mid;
    multimap<i64,bool>::iterator it;
    while(cin>>n)
    {
        cnt++; //cout<<"cnt:"<<cnt<<endl;
        M.insert(std::pair<i64,bool>(n,true));
        if(cnt%2==1)
        { //cout<<"bijor"<<endl;
           i=0;
            for(it=M.begin();it!=M.end();++it,++i)
            {
                if(i==cnt/2)
                {
                    a=it->first; //cout<<"a:"<<a<<endl;
                    break;
                }
            }
            printf("%lld\n",a);
        }
        else
        { //cout<<"jor"<<endl;
            i=0;
            for(it=M.begin();it!=M.end();++it,++i)
            {
                if(i==cnt/2)
                {
                    a=it->first; //cout<<"a:"<<a<<endl;
                    it--;
                    b=it->first; //cout<<"b:"<<b<<endl;
                    break;
                }
            }
            mid=(a+b)/2;
            printf("%lld\n",mid);
        }
    }
    return 0;
}
