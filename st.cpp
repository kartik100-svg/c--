#include<iostream>

using namespace std;
class stack{
    public:
        int *arr;
        int top;
        int size;
        stack(int size){
            this-> size = size;
            arr=new int[size];
            top=-1;
        }
        void push(int element){
            if(size-top>1){
                top++;
                arr[top]=element;
            }
            else{
                cout<<"overflow"<<endl;
            }
        }
        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"underflow"<<endl;
            }
        }
        bool isempty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
        int peek(){
            if(top>=0){
                return arr[top];
            }
            else{
                cout<<"stack is empty"<<endl;
                return -1;
            }
        }
        void display(){
            cout<<"stack element";
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

};

int main(){
    stack st(5);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    st.push(99);
    st.display();
    st.pop();
    st.pop();
    st.display();
    st.peek();

    // stack<int>s;
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // s.push(6);
    // s.push(7);
    
    // s.pop();
    // cout<<"print top  element:"<<s.top()<<endl;
    // cout<<"print size  element:"<<s.size()<<endl;
    // for(int i=0;i<s.size();i++){
    //     cout<<s.<<endl;
    // }   
   
    return 0;
}