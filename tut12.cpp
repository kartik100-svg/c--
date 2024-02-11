#include<iostream>
using namespace std;

int main(){
             /*arrays*/
    int marks[4] ={23,44,56,66};
    int mathmarks[4];
    mathmarks[0]=345;
    mathmarks[1]=458;
    mathmarks[2]=33;
    mathmarks[3]=555;
    // cout<<"the are math marks"<<endl; 
    // cout<<mathmarks[0]<<endl; 
    // cout<<mathmarks[1]<<endl; 
    // cout<<mathmarks[2]<<endl; 
    // cout<<mathmarks[3]<<endl; 
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl; 
    // cout<<marks[1]<<endl;
    // //you can change the value os an array//
    // marks[2]=456;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
         /*FOR LOOP*/
        //  int i=0;
        // for ( i = 0; i < 4; i++)
        // {
        //    cout<<"The vaalue of marks:"<<i<<marks[i]<<endl;
        // }
        //      /*for while loop*/
        //    while (i<4)
        //    {
        //     cout<<"the value of marks:"<<i<<marks[i]<<endl;
        //     i++;
        //    }
        //         /*do while loop*/
        //      do
        //      {
        //         cout<<"the value of marks"<<i<<marks[i]<<endl;
        //         i++;

        //      } while (i<4);
            /*pointer and array*/
            int*p = marks;
             cout<<*(p++)<<endl;
            cout<<*(++p)<<endl;
            // cout<<"the value of *p:"<<*p<<endl;
            // cout<<"the value of *(p+1):"<<*(p+1)<<endl;
            // cout<<"the value of *(p+2):"<<*(p+2)<<endl;
            // cout<<"the value of *(p+3):"<<*(p+3)<<endl;

         
    return 0; 
}