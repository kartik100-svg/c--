#include <iostream>
#include <climits>
using namespace std;

int largestElementIndex(int array[], int size) {
    int max = INT_MIN;
    int maxindex = -1;
    for(int i=0;i<size;i++){
        if(array[i]<max){
            array[i]=max;
            maxindex=i;
        }
    }
   return maxindex;
}
int main(){
    int array[]={3,2,5,6,7,1};
    int indexoflargest=largestElementIndex(array,6);
    array[indexoflargest]=-1;
    int indexOfSecondLargestElement;largestElementIndex(array,6);
    cout<<"indexOfSecondLargestElement"<<array[indexOfSecondLargestElement]<<endl;
    return 0;
}