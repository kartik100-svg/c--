#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>set1;
    set1.insert(1);
    set1.insert(9);
    set1.insert(8);
    set1.insert(6);
    set1.insert(12);
    set1.insert(16);
    for(auto ele:set1){
        cout<<ele<<" ";
    }cout<<endl;
    // set<int>::iterator itr;
    // for(itr=set1.begin();itr!=set1.end();itr++){
    //     cout<<*itr<<" ";
    // }
    // cout<<endl;
    // set1.erase(9);
    // for(itr=set1.begin();itr!=set1.end();itr++){
    //     cout<<*itr<<" ";
    // }
    // cout<<endl;
    // set1.erase(set1.begin(),set1.end());
    
    // for(itr=set1.begin();itr!=set1.end();itr++){
    //     cout<<*itr<<" ";
    // }
    // cout<<endl;
    // move iterator 
    auto itr = set1.begin();
    advance(itr,5);
    set1.erase(itr);
    for(itr=set1.begin();itr!=set1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    return 0;
}
