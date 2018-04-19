#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mxn 50009

string s,p;
map<char,ll>M;

int main(){
    ios_base::sync_with_stdio(0);
    ll sz,i,j,k,f=0,ques;
    cin>>s;
    sz=s.size();
    if(sz<26){
        cout<<-1<<"\n";
        return 0;
    }

    for(i=0;i<sz;i++){
        ques=0;
        M.clear();
        if(i+26<=sz){
        string q=s.substr(i,26); //cout<<"q:"<<q<<endl;
        ll ln=q.size();
        if(ln==26)
        for(j=0;j<ln;j++){
            if(q[j]>='A' && q[j]<='Z'){
                M[q[j]]++;
//                if(M[s[j]]>1){
//                    M.clear();
//                    break;
//                }
            }
            else if(q[j]=='?'){
                ques++;
            }
        } //cout<<M.size()<<" "<<ques<<"\n";

            if(M.size()+ques==26){
                f=1;
                for(k=i;k<i+26;k++){
                    if(s[k]=='?'){
                        char ch='A';
                        while(ch<='Z'){
                            if(M[ch]==0){
                                s[k]=ch;
                                M[ch]=1;
                                break;
                            }
                            ch++;
                        }

                        //if(ch>'Z') f=0;
                    }
                }

                //break;
            }
            else{
                continue;
            }

        }
    }

    if(f==1){
        for(i=0;i<sz;i++){
            if(s[i]>='A' && s[i]<='Z') cout<<s[i];
            else if(s[i]=='?') cout<<"A";
        }

        cout<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }

    return 0;
}
