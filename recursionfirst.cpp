#include<iostream>
using namespace std;

int f(int n){
    // base case 
    if(n== 1){
        return 1;
    }
    int ans;
    ans= n * f(n-1);
    return ans;

}
int sum(int x){
    //base case
    if(x==1) return 1;
    int sol;
    sol = x+sum(x-1);
    return sol;
}

int main(){
   int result = f(4);
   int lol = sum(3);
    cout<<lol<<endl;
   cout<<result<<endl;
    return 0;
}