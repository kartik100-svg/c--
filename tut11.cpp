#include<iostream>
using namespace std;

int main(){
    // what is a pointer?-->data types which holds the address of other data types
    int a=3;
    int b=&a=56;

    //&--->(address of) operators;
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;

    //*--->>value atderefrence operator;
    cout<<"the address at b is"<<a<<endl;
    // pointer to pointer
    int c=b;
    cout<<"the address of b is"<<b<<endl;
    
    
    





      return 0;
}