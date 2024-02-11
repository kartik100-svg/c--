#include<iostream>
#include<map>
#include<unordered_map>
#include<utility>  // Added for using make_pair
using namespace std;

int main(){
    map<string, int> m;

    // Insertion 1
    m.insert(make_pair("gaud", 3));

    // Insertion 2
    m.insert(make_pair("kartik", 2));

    // Insertion 3
    m["mera"] = 1;

    // Update the value for "mera"
    m["mera"] = 2;
    // size 
    cout << m["mera"] << endl;
    cout<<m.at("gaud") << endl;
    // cout<<m.at("unknown") << endl;
    cout<<m["unknown"] <<endl;
    cout << m.size() <<endl;
    // search is presence 
    // if string is present then return 1 other 0 
    cout<< m.count("kartik")<<endl;
     map<string, int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}
