#include<iostream>
using namespace std;

int main(){
      // int array[]={2,5,6,9} ;
    // cout<< sizeof(array)<<endl;
                                                                     // //length of array;
    //  cout<<sizeof(array)/sizeof(array[0])<<endl;
    
                                                                     /* loops in arrays */
    
      // int size=sizeof(array)/sizeof(array[0]);

    // for(int idx=0; idx<size; idx++){
    //     cout<<array[idx] <<endl; 
    // }
                                                                       /*for each loop syntax */
           /*for(datatype variable:array){ 
            //statement//
                }*/
            // for(int element:array){
            //     cout<<element <<endl;
            // }
                                                                                 /*while loop*/
                // int index=0;
                // while (index<size) {
                //     cout<<array[index]<<endl;
                //     index++;
                // }

          // char vowels[5];
          // for (int index = 0; index < 5; index++)
          // {
            
            
          // }
                
     int arr[]={2 ,3 ,4 ,5 ,6 ,7 ,8};
    //  int n;
    //  cout <<"the value of n is"<<endl;
    //  cin>>n;
    // for(int i=0;i<n;i++){
      int count(int arr[],int n);
int n;
cout<<"the value of n"<<endl;
//we will count the number of odd elements and subtract it from n which will give
//even elements
int count_odd=0;
for(int i=0;i<n;i++)
{
if(arr[i]%2!=0)
{
count_odd++;
}
}

      


     




    return 0;
}