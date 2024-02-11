//There are two types of headra files:
// 1.system header files: It comes with compiler
#include<iostream>
// 2. User defined header files: It is written by programmer
//#include "this.h" //--> This will produce an errorif this.h is no present in the current directory 

using namespace std;

int main(){                                             
    
    int a=55,b=194;
    cout<<"Operators in c++"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    // Arithemetic operators
    cout<<"The value of a + b :" <<a + b<<endl;
    cout<<"The value of a * b :" <<a * b<<endl;
    cout<<"The value of a / b :" <<a / b<<endl;
    cout<<"The value of a - b :" <<a - b<<endl;
    cout<<"The value of a % b :" <<a % b<<endl;
    cout<<"The value of  ++a  :" << ++a <<endl;
    cout<<"The value of  --a   :" << --a<<endl;
    // '%' this sign is modulus
    
    //Assignment operators --> used to assign values to variables
    //int a=4, b=9;
    //char d='d';

    // comparison operators
    
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<"the value of a>!b is "<<(a>!b)<<endl;
    cout<<"the value of a<!b is "<<(a<!b)<<endl;
    
   return 0;
} 
