  #include<iostream>
  #include<climits>
  using namespace std;

  int main(){
      int n,m;
      cout<<"n:"<<endl;
      cout<<"m:"<<endl;
      cin>>m>>n;
      int mat[m][n];
      for(int i=0; i<n;i++){
          for(int j=0;j<m;j++){
              cin>>mat[i][j];
          }
      }
       
       int val = INT_MIN;
          for(int i=0; i<m;i++){
          for(int j=0;j<n;j++){
              if(mat[m][n]> val){
                  val=mat[i][j];
              }
          }
          }
          cout<<val;
    
      return 0;
  }
