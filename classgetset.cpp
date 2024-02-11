#include<iostream>
using namespace std;
class hero{
    // we access of health then we use geter/setter; 
    private:
    int health;
    public:
    int power;
    int level;
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
    // ramesh.gethealth this is a wrong way to set your health 
    // ramesh.gethealth=60;
    ramesh.sethealth(45);
    cout<<"ramesh health is "<<ramesh.gethealth()<<endl;
    ramesh.setlevel('d');
    cout<<"ramesh new get level is "<<ramesh.getlevel()<<endl;
    ramesh.level=110;
    cout<<"ramesh level is "<<ramesh.level<<endl;
    return 0;
}