#include<bits/stdc++.h>
using namespace std;
stack<string>b;
stack<string>f;
int main(){
    int t,T,i,j;
    string cmd,url,s;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
        printf("Case %d:\n",t);
        s="http://www.lightoj.com/";
        while(1){
            cin>>cmd;
            if(cmd=="QUIT")
                break;
            if(cmd=="VISIT"){
            cin>>url;
            b.push(s);
            s=url;
            cout<<s<<endl;
            while(f.size()>0){
                f.pop();
            }
        }

            else if(cmd=="BACK"){
                if(b.size()==0){
                    printf("Ignored\n");
                }
                else{
                    f.push(s);
                    s=b.top();
                    b.pop();
                    cout<<s<<endl;
                }
            }

            else if(cmd=="FORWARD"){
                if(f.size()==0){
                    printf("Ignored\n");
                }
                else{
                    b.push(s);
                    s=f.top();
                    f.pop();
                    cout<<s<<endl;
                }
            }
        }
        while(b.size()>0){
            b.pop();
        }
        while(f.size()>0){
            f.pop();
        }
    }
    return 0;
}
