#include<iostream>
using namespace std;
     
    // int array[]={1,2,3,4};
    // cout<<sizeof(array)<<endl;  
    // cout<<sizeof(array)/sizeof(array[0])<<endl;
    // int array[]={3,7,18,19,15};
    // int max=0;
    // for(int i=0;i<5;i++){
    //     if (array[i]>max)
    //     {
    //         max=array[i];
    //     }
        
    //}
    //cout<<max<<endl;
   // int array[]={1,2,3,4,5,6,7,8};
    // int n;
    // cout <<"the value of n is"<<endl;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(array[i]%2==0){
    //         cout<<array[++i]<<endl;
    //     }
    //     else{
    //         cout<<array[--i]<<endl;
    //     }
    //     i%2==0;
    // }
       //int count(int arr[],int n)
//{
//we will count the number of odd elements and subtract it from n which will give
//even elements
// int count_odd=0;
// for(int i=0;i<n;i++)
// {
// if(arr[i]%2!=0)
// {
// count_odd++;
// }
// }
// return count_odd;


//        #include <iostream>

// int count_odd_even(int arr[100], int n) {
//     int odd_count = 0;
//     int even_count = 0;
    
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0) {
//             even_count++;
//         } else {
//             odd_count++;
//         }
//     }
    
//   cout << "Count of odd integers: " << odd_count << endl;
//   cout << "Count of even integers: " << even_count << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     count_odd_even(arr, n);
    
//     return 0;
// }
 
    
#include <iostream>

int main() {
    int arr[7];
    int n;

    // Read array size       
    cout << "Enter the size of the array: ";
    cin >> n;

    // Read array elements
    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int odd_count = 0;
    int even_count = 0;

    // Count odd and even integers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Print counts
    cout << "Count of odd integers: " << odd_count << endl;
    cout << "Count of even integers: " << even_count << endl;

    return 0;
}




