//second largest element in array???
// #include<iostream>
// using namespace std;
// int largestElementIndex(int array(),int size){
//     int max=INT16_MIN;
//     int maxindex=-1;
//     for(int i=0; i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     } 
//     return maxindex;
    
// }  
#include <iostream>
#include <climits>

int main() {
    int numbers[] = {5, 10, -2, 20, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    std::cout << "The maximum value is: " << max << std::endl;

    return 0;
}






