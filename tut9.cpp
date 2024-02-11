#include<iostream>
using namespace std;

int main(){
     int age;
     cout<<"Tell me your age "<<endl;
     cin >>age;
   // cout<<"this is tutorial line";
    //selection control structure<<if else--if else (ladder);
    
   
    if(age<18){
        cout<<"you can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and you will get a kid pass to the party "<<endl;
    }
   else if(age==1){
       cout<<"you are not yet born"<<endl;
       }
    else{
        cout<<"you can come to the party"<<endl;
    }
   // selection control structure<<switch case statement;
    
   //   switch (age) 
   //        {          
   //   case 18:
   //      cout<<"you are 18"<<endl;
   //      break;
   //      case 22:
   //      cout<<"you are 22"<<endl;
   //      break;
   //      case 2:
   //      cout<<"you are 2"<<endl;
   //      break;     
     
   //   default:
   //   cout <<"you are not eligible"<<endl; 
   //      break;
     
   //   cout<<"Done with switch cases"<<endl;
   //       }
    return 0;
    }