#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s;

int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);

    ll sz,i,j,k;
    cin>>s;
    sz=s.size();
    for(i=0;i<s.size();i++){ //cout<<s<<"\n"; system("pause");
        if(s[i]!=s[i+1]) continue;
        else if(i+2<s.size() && s[i]==s[i+1] && s[i]==s[i+2]){
            j=i+2;
            k=0;
            while(j<s.size() && s[j]==s[i]){
                j++; //cout<<":) "<<j;
                k++;
            }
            s.erase(i+2,k);
            i--;
        }
        else if(i+3<s.size() && s[i]==s[i+1] && s[i+2]==s[i+3]){
            j=i+3;
            k=0;
            while(j<s.size() && s[j]==s[i+3]){
                j++; //cout<<":D "<<j;
                k++;
            }
            s.erase(i+3,k);
            i--;
        }
    }

    cout<<s<<"\n";
    return 0;
}
