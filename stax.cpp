#include<iostream>
using namespace std;
class stack{
    int capacity ;
    int *arr ;
    int top ;
public: 
    stack(int c){
        this->capacity=c;
        arr=new int[c];
        this->top=-1;
    }
    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"overflow"<<endl;
        }
        this->top++;
        this->arr[this->top]=data;
    }
    int pop(){
        if(this->top==-1){
            cout<<"underflow"<<endl;
            return;
        }
        this->top--;
    }


};




int main(){
    stack help;
    return 0;
}