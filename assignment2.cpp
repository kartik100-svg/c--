#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout <<"the value of n is"<<endl;
    // cin>>n;
    // int factorial=3;
    // for (int i=1;i<=n;i++){
    //     factorial*=i;
    //     cout <<factorial<<endl;
    //}
//     cout<<"Armstrong numbers in the range of 100 to 500 are :"<<endl;
// for(int i=0;i<500;i++)
// {
// int sum = 0;
// int t = i;
// while(t!=0)
// {
// sum = sum+((t%10)*(t%10)*(t%10));
// t = t/10;
// }
// if(sum == i)
// {
// cout << i <<"\n";
// }
// }
int n;
cout<<"n"<<endl;
cin>>n;
int reverse=0;
while (n>0){
    int lastdigit=n%10;
    reverse=reverse*10+lastdigit;
    n/=10;
}
cout<<reverse<<endl;


    return 0;
}