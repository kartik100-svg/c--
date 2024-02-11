 #include<iostream>
 using namespace std;
void f(int &z){
     z=100;
 }
 // variable pass itself
 int main(){
     int a=9;
     f(a);
     cout<<a;
    
     return 0;
 }
