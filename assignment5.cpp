#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"n:"<<endl;
     cin>>n;
     int value=0;
    // for(int i=1;i<=n;i*=2){
    //     value++;
    // cout<<value<<endl;
    // } 
    for(int i=1;i<=n;i*=2){
        for(int j=1;j<=i;j++){
            value++;
        cout<<value;
        }
    }
    cout<<endl;
   


    return 0;
}