#include<bits/stdc++.h>
using namespace std;
#define i64 long long int
map<char,i64>M;
int main()
{
    i64 n,ans;
    char a,b;
    cin>>n; //cout<<"n:"<<n<<endl;
        ans=0;
        while(cin>>a && cin>>b)
        { //cout<<a<<" "<<b<<endl;
            M[a]++;
            if(M[(b-'A')+'a']!=0)
                M[(b-'A')+'a']--;
            else
                ans++;
        }
        cout<<ans<<endl;
}
