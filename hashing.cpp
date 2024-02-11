#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // this is template and value stored in map data stored in form of (key,value) 
    // this is template and  value stored in ma data stored in form of (key2,value2) 
    // creation
    map<string,int>m;

    // insertion

    // 1
    pair<string,int>p= make_pair("kartik",3);
    m.insert(p);

    // 2
    pair<string,int>pair2("gaud",2);
    m.insert(pair2);

    // 3
    m["mera"]=1;
    // what will happen 
    m["mera"]=2;

    // searching
    cout<<m["mera"]<<endl;
    cout<<m.at("kartik")<<endl;
    //very very important cheez
    cout<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;
    cout<<m.size()<<endl;
    cout<<m.count("kartik")<<endl;
    // erase 
    // m.erase("kartik");
    cout<<m.size()<<endl;
    // iterator
    map<string,int>::iterator it=m.begin();
    while (it != m.end()){
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }

    return 0;
}