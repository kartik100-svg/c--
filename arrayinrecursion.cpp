#include<iostream>
using namespace std;
void f(int* a,int idx,int n){
    //base case
    if(idx==n) return;
    //self work
    cout<<a[idx]<<endl;
    //assumption
    f(a,idx+1,n);
}
int main(){
    int n=5;
    int a[]={2,4,5,6,7};
     f(a , 0 , n);
    return 0;
}