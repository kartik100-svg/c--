#include<iostream>
using namespace std;
class hero{
    // we access of health then we use geter/setter; 
    public:
    
    int health;
    int power;
    int level;
    hero(){
        cout<<"constructor called"<<endl;
    }
    void print(){
         cout<<level<<endl;
     }
     int gethealth(){
        return health;
     }
     char getlevel(){
        return level;
     }
     void sethealth(int h){
        health = h;
     }
     void setlevel(char ch){
        level = ch;
     }
};

int main(){
    // object 
    hero ramesh;


    return 0;
}