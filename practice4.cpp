#include<iostream>
using namespace std;

int main(){
    /* how many digits in no. */
    // int n;
    // cout<<"the value of n:"<<endl;
    // cin>>n;
    // int digits=0;
    // while(n>0){
    //     digits++;
    //     n=n/10;

    // }
    // cout<<digits<<endl;

    /*find the sum of digit in a given no. n*/
    // int n;
    // cout<<"the value of n"<<endl;
    // cin>>n;
    // int sum=0;

    // while (n>0){
    //     int lastdigit=n%10;
    //        sum+=lastdigit;
    //        n/=10;
    // }
    // cout<<sum<<endl;

    /*reverse the digit of a number*/
     int n;
     cout<<"the value of n"<<endl;
     cin>>n;
     int reverse=0;
     while (n>0)
    {
       int lastdigit=n%10;
       reverse=reverse*10+lastdigit;
       n/=10;
     }
     cout<<reverse<<endl;


     





    return 0;
}
