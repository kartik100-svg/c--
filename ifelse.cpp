#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>v = {2,4,5,6,7};
    // int n = v.size();
    // for(int i = 0;i<n;i++){
    //     if(v[i]%2==0){
    //       cout<<"even "<<v[i]<<endl;
    //     }
    //     else{
    //         cout<<"odd "<<v[i]<<endl;
    //     }
    // }
    int number =50;

    if (number >= 0 && number <= 10) {
        cout << "Number is between 0 and 10." << endl;
    }

    if (number > 10 && number <= 20) {
        cout << "Number is between 11 and 20." << endl;
    }

    if (number > 20 && number <= 30) {
        cout << "Number is between 21 and 30." << endl;
    }
    if(number =>40 && number <=-1){
        cout<<"number is greater than 40 "
    }
    


    int c = 50;

    if (c >= 0 && c <= 10) {cout << "c is between 0 and 10." << endl;
    } else if (c > 10 && c <= 20) {
        cout << " c is between 11 and 20." << endl;
    } else if (c > 20 && c <= 30) {
        cout << "c is between 21 and 30." << endl;
    } else {
        cout << "c is greater than 30 or less than 0." << endl;
    }

    return 0;
};