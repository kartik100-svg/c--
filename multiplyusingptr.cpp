#include<iostream>
using namespace std;

//int main(){
    // int a ,b;
    // cout<<"a"<<" "<<"b";
    // cin>>a>>b;
    // int c=a*b;
    // int *ptr=&c;
    // cout<<*ptr<<endl;

//largest and smallest no in the given three no.
// int largestAndSmallest(int num1, int num2, int num3, int *largest)
// {
//     *largest = max(num1, max(num2, num3));
//     return min(num1, min(num2, num3));
// }
 
// int main()
// {
//     int num1, num2, num3;
//     cout<<"num1"<<" "<<"num2"<<" "<<"num3"<<endl;
//     cin >> num1 >> num2 >> num3;
//     int largest;
//     int smallest = largestAndSmallest(num1, num2, num3, &largest);
//     cout << largest << ' ' << smallest;
//     return 0;
// }
 
/* swap function */
// void swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main(){
//     int x=3,y=8;
//     int *p1=&x;
//     int *p2=&y;
//     swap(p1,p2);
//     cout<<x<<" "<<y;
// return 0;
//}

//first and last occurence ----->char;
 void findFirstAndLastIndex(string s,char ch, int *first, int *last){
    for(int i=0;i<=s.size();i++){
        if(s[i]==ch){
            *first=i;
             break;
        }
    }
 for(int i=s.size()-1;i>=0;i--)
    if(s[i]==ch){
       *last=i;
        break;
    } 
 }
int main(){

    string s="asfgak";
    char ch='a';
    int first = -1;
    int last = -1;
    int *pf=&first;
    int *pl=&last;
    findFirstAndLastIndex(s,ch,pf,pl);
   
    cout<<first<<"   "<<last<<endl;

return 0;

}
   
            
          


