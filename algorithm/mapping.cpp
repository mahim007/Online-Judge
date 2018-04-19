#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>mymap;
    map<char,int>::iterator it;

    mymap['a']=100;
    mymap['b']=200;
    mymap['c']=300;
    mymap['d']=400;
    //cout<<mymap['a']<<endl;

    it=mymap.find('b');
    printf("%d\n",it->second);

    mymap.erase(it);
    mymap.erase(mymap.find('d'));

    cout<<"elements in mymap:"<<endl;
    cout<<"a=> "<<mymap.find('a')->second<<endl;
    cout<<"c=> "<<mymap.find('c')->second<<endl;

    return 0;
}
