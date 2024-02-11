#include<iostream>
using namespace std;

int main(){
    int count=0;
    int arr[3]={2,3,4};
   for(int i=0;i<=2;i++){
    count+=arr[i]&1;
    arr[i]>>=1;
   cout<<count<<endl;
   }
   cout<<endl;
   int num=3;
   int j=0;
    while (num > 0) {
        j += num & 1;
        num >>= 1;
        num--;
    }
    cout<< j <<endl;
   
    return 0;
}