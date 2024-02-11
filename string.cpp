#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str = "2345";
    string ptr = "4563";
    string partly;
    // partly = str - ptr;
    // cout<<partly;
    sort(str.begin(),str.end());
    sort(ptr.begin(),ptr.end());
    // differnce between two string 
    set_difference(str.begin(),str.end(),ptr.begin(),ptr.end(),back_inserter(partly));
    cout<<partly<<endl;
  
    // char a = '4';
    // char b = '5';
    // char c;
    // c = a - b;
    // cout<<c<<endl;
    // cout<<static_cast<int>(c);
    return 0;
}