#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"the value of n is:"<<endl;
    // cin>>n;
    // for (int i=1; i<n; i++){
    //     for (int j=0; j<n-i; j++){
    //         cout
    //     }
    // }
// char ch='a';
// int x=(int)ch;
// cout<<x<<endl;
// char ch='a';
// cout<<(ch+1)<<endl;
// the loop below helps us to print in one;ine;
int n;
cout<<"n:"<<endl;
cin>>n;
for(int line=1; line<=n;line++){
        int no_of_spaces=(n-line);
    for(int k=0;k<=no_of_spaces;k++){
        cout<<" ";
    }
    int no_of_chars=2*line-1;


    for(int i=0;i<no_of_chars;i++){
        char ch=(char)('A'+i);
        cout<<ch;
    }
    cout<<endl;
}
for(int line=n+1;line<=2*n-1;line++){
int no_of_spaces=(line-n);
for(int k=0; k<=no_of_spaces;k++){
    cout<<" ";
}

 int no_of_chars=2*((2*n-line)-1);
 for(int i=0;i<=no_of_chars;i++){
    char ch=(char)('A'+i);
    cout<<ch;
 }   
 cout<<endl;
 
}


    return 0;
}