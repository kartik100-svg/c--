#include<iostream>
using namespace std;
class hero{
public:
    int health;
    int power;
    int level;
    void print(){
         cout<<level<<endl;
     }
};

int main(){
    // object 
    hero ramesh;
    
     ramesh.health=70;
     ramesh.power=40;
     ramesh.level=3;
     cout<<"health of hero ="<<ramesh.health<<endl;
     cout<<"level of hero ="<<ramesh.level<<endl;
     cout<<"power of hero ="<<ramesh.power<<endl;
    // // create another object 
     hero sahil;
     sahil.health=20;
     sahil.power=22;
     sahil.level=3;
     cout<<"health of sahil="<<sahil.health<<endl;
     cout<<"power of sahil="<<sahil.power<<endl;
     cout<<"level of sahil="<<sahil.level<<endl;
    return 0;
}