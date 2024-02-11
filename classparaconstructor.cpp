#include<iostream>
using namespace std;
class hero{
    // we access of health then we use geter/setter; 
    public:
    
    int health;
    int power;
    int level;
    hero(int health){
        cout<<"this->"<<this<<endl;
        this->health=health;
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
    hero ramesh(10);
    cout<<"ramesh address ->"<<&ramesh<<endl;
    // there is a same addres of ramesh and this keyword because this keyword point to be a current object 

    hero*b=new hero(20);
    return 0;
}