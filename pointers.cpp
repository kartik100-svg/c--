#include<iostream>
using namespace std;

int main(){
    int x=7,y=0;
    int* ptr=&x;
    int* ptrf=&y;
    cout<<ptrf<<" "<<*ptr;
    return 0;
}
// cout<<*ptr<------isse * se pointer mai j value store hoti hai woh mil jati hai or
// yaad rakhna ki pahele addreess pe jaega fir jo value us address pe presnt hogi use leke aa jaegaa;