#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main()
{  
    //creation
    map<string,int>m;

    //insertion

    //1
    pair<string,int>p=make_pair("babbar",3);
    m.insert(p);

    //2
    pair<string,int>pair2("love",2);
    m.insert(pair2);
    
    pair<string,int>p2=make_pair("zingman",1);
    m.insert(p2);

    //3
    m["mera"]=1;
    m["mera"]=2;
    //searching
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    // cout<<m.at("navya")<<endl;
    cout<<m["navya"]<<endl;
    cout<<m.at("navya")<<endl;

    map<string,int>::iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" ";
        it++;
    }
}