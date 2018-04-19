#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t=1;
    while(cin>>s)
    {
        if(s=="HELLO")
        {
            cout<<"Case "<<t++<<": ENGLISH\n";
        }
        else if(s=="HOLA")
        {
            cout<<"Case "<<t++<<": SPANISH\n";
        }
        else if(s=="HALLO")
        {
            cout<<"Case "<<t++<<": GERMAN\n";
        }
        else if(s=="BONJOUR")
        {
            cout<<"Case "<<t++<<": FRENCH\n";
        }
        else if(s=="CIAO")
        {
            cout<<"Case "<<t++<<": ITALIAN\n";
        }
        else if(s=="ZDRAVSTVUJTE")
        {
            cout<<"Case "<<t++<<": RUSSIAN\n";
        }
        else if(s=="#")
            break;
        else
            cout<<"Case "<<t++<<": UNKNOWN\n";

    }
    return 0;
}
