// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"n" <<endl;
//     cout<<"m" <<endl;
    
//     cin>>n>>m;
//     int array[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m; j++){
//             cin>>array[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m; j++){
//             cout<<array[i][j]<<" ";
//         }
//             cout<<endl;
//     }
//     return 0;
// }






#include<iostream>
using namespace std;

int main(){
   int r1,c1;
     cout<<"r1" <<endl;
     cout<<"c1" <<endl;
    
     cin>>r1>>c1;  
     int A[r1][c1];
     for(int i=0;i<r1;i++){
         for(int j=0;j<c1; j++){
             cin>>A[i][j];
         }
     }
     int r2,c2;
     cout<<"r2" <<endl;
     cout<<"c2" <<endl;
    
     cin>>r2>>c2; 
     int B[r2][c2];
     for(int i=0;i<r2;i++){
         for(int j=0;j<c2; j++){
             cin>>B[i][j];
         }
             
     }
     if(c1!=r2){
        cout<<"matrix miltuply not possible"<<endl;
     }
     int C[r1][c2];
     for(int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            int value = 0;
            for(int k=1;k<r2;k++){
                value+=A[i][k]*B[k][j];
            }
            C[i][j]=value;

        }
     }
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<" ";
        }
         cout<<endl;
     }



    return 0;
}




