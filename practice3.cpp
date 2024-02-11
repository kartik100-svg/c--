#include<iostream>
using namespace std;

int main(){

    // int num;
    // cout<<"num"<<endl;
   
    // cin>>num;
    // if(num%2==0){
    //     cout<<"Even"<<endl;
    // }
    // else{
    //     cout <<"Odd"<<endl;
    // }
    // int age;
    // cout<<"age"<<endl;
    // cin >>age;
    // if (age<18)
    // {
    //     cout<<"child"<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"teenager"<<endl;
    // }
    // else 
    // {
    //     cout<<"Do party"<<endl;
    // }

    // int length,breadth;
    // cout<<"length"<<endl;
    // cin>>length;
    // cout<<"breadth"<<endl;
    // cin>>breadth;
    // if(length==breadth){
    //     cout<<"this is a square"<<endl;
    // }
    // else{
    //     cout<<"it is a reactangle"<<endl;
    // }
    // int x;
    // cout<<"the value of x is"<<endl;
    // cin>>x;
    // if(x<0){
    //      x=x*(-1);
    //          }
    //       cout<<"absolute value is"<<x*6<<endl;   

    // int cp,sp,amount;
    // cout <<"the value of cp is"<<endl; 
    // cin>>cp;
    // cout <<"the value of sp is"<<endl; 
    // cin>>sp;
    // if(sp>cp){
    //     amount=sp-cp;
    // cout<<"profit="<<amount;
    // }
    // else if (cp>sp)
    //   {
    //     amount=cp-sp;
    //     cout<<"loss="<<amount;
    // }
    // else{
    //     cout<<"no profit no loss"<<endl;
    // }
    
        
    // int amount,cp,sp;
    // cout<<"cp is"<<endl;
    // cin>>cp;
    // cout<<"sp is"<<endl;
    // cin>>sp;
    // if(cp>sp){
    //     amount=cp-sp;
    //     cout<<"loss="<<amount<<endl;
    // }
    // else if(sp>cp){
    //     amount=sp-cp;
    //     cout<<"profit="<<amount<<endl;
    // }
    // else{
    //     cout<<"no profit no loss"<<endl;
    // }
    // int x;
    // cout<<"the value of x is"<<endl;
    // cin>>x;
    // if(x>0){
    //     cout<<"the positive value:"<<x<<endl;
    // }
    // else{
    //     cout<<"negative value skipped"<<endl;
    // }
    int marks;
    cout <<"the marks"<<endl;
    cin>>marks;
    if(marks>=90  ){
        cout<<"marks=+a grade"<<marks<<endl;
    }
   else if(marks>= 80 ){
        cout<<"marks= a grade"<<marks<<endl;
    }
    else if(marks>=70){ 
        cout<<"marks = +b grade"<<marks<<endl;
    }
    else if(marks>=60){ 
        cout<<"marks = b grade"<<marks<<endl;
    }
    else if(marks>=50){ 
        cout<<"marks = +c grade"<<marks<<endl;
    }
    else if(marks<=50){ 
        cout<<"marks = c grade"<<marks<<endl;
    }
    else{
        cout<<"padho likho ias bano back benchers"<<marks<<endl; 
    }
        
    return 0;
}