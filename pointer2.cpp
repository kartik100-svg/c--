#include<iostream>
using namespace std;

int main(){
    int x=6;
    float y=7.9;
    //create a pointer that can store address of x;
    //as x is an integer variable , so we need a pointer
    //that can store address of intrgr type

    int *ptr=&x;
    cout<<"the address of insidepointer:"<<ptr<<endl;
    cout<<"value present at the address of stored pointer:"<<*ptr<<endl;//derefrence;
     //create a pointer that can store address of y;
    //as y is an float variable , so we need a pointer
    //that can store address of float type
    float *ptrf=&y;
    cout<<"the address of insidepointer:"<<ptrf<<endl;
    cout<<"value present at the address of stored pointer:"<<*ptrf<<endl;//derefrence;
    x=46;//the bucket x is updated the value from 6-->46
    //but pointer is still pointing to same bucket
     //now if we derefrenceptr,we will get 6;

    
     cout<<"new updated value of x is "<<ptr<<endl;
     cout<<"ptr still pointing to same memory which has 46 instead of 6 : "<<*ptr<<endl;
     //updating x with pointer
     *ptr=50;
     cout<<"new valueof x"<<x<<endl;
     cout<<"new value poiinted by ptr "<<ptr<<endl;
     int value_at_x=*ptr;
     cout<< value_at_x<<endl;


    return 0;
}