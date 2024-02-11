#include<iostream>
using namespace std;

int largestElementIndex(int array[], int size){
     int max=int MIN;
 
    int maxindex= -1;
    for (int i=0;i<size;i++){
        if (array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }

    
    return maxindex;
}