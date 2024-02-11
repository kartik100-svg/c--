#include<iostream>
using namespace std;
void changevalue(int z){
    z=100;
}
// call value created a copy so not printed z value then function copy value of a z ne copy ki a ki value
int main(){
    int a=2;
    changevalue(a);
     
    cout<<a;
    return 0;
}