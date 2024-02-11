#include<iostream>
using namespace std;
class hero{
    // we access of health then we use geter/setter; 
    
    public:
    int health;
    int power;
    char level;
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
    
    // static 
    hero ramesh;
    ramesh.sethealth(40);
    ramesh.setlevel('c');
    cout<<"health of ramesh "<<ramesh.health<<endl;
    cout<<"level of ramesh "<<ramesh.getlevel()<<endl;
     
    //  dynamically
    hero*b=new hero;
    b->sethealth(20);
    b->setlevel('j');
    cout<<"health of ramesh "<<(*b).health<<endl;
    cout<<"level of ramesh "<<(*b).level<<endl;
   //  in other words write a *b. this replace b-> this is the same mean 
    cout<<"health of ramesh "<<b->health<<endl;
    cout<<"level of ramesh "<<b->level<<endl;
    return 0;
}