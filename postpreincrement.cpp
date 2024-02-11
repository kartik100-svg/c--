#include<iostream>
using namespace std;

int main(){
    int a[2]={2,19};
    int *ptr=&a[0];
    cout<<ptr<<" "<<*ptr<<endl;
    cout<<*ptr+1<<" "<<ptr+1<<endl;
    cout<<*ptr++<<endl;
    cout<<a[0]<<"  "<<a[1]<<endl;
    cout<<*ptr<<" "<<ptr<<endl;
    cout<<*ptr+1<<" "<<ptr+1<<endl;

    cout<<a<<endl;  //for by the way --->>1isse aayay ka hi address print ho jata hai

    return 0;
}