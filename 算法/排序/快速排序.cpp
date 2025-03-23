#include <iostream>
using namespace std;

int partition(int* arr, int left, int right){
    int pivot = left;
    bool a=false,b=false;
    while(left < right){
        while(left < right &&arr[right] >= arr[pivot]) right--;
        while(left < right &&arr[left] <= arr[pivot]) left++;
        swap(arr[left], arr[right]);
    }
    swap(arr[left], arr[pivot]);
    return left;
}

int quickSort(int* arr, int left ,int right) {
    while(left < right){
        
        int pivotIndex = partition(arr, left, right);

        if (pivotIndex-left > right-pivotIndex) {
            quickSort(arr, pivotIndex+1, right);
            right = pivotIndex-1;
        }
        else {
            quickSort(arr, left, pivotIndex-1);
            left = pivotIndex+1;                             //尾递归优化
        }
    }
}

int main() {    

    int arr[14] = {5, 2, 8, 3, 9, 1, 8, 7, 2, 8, 3, 1, 6, 9};
    quickSort(arr, 0, 13);
    for(int i=0;i<14;i++)cout<<arr[i]<<" ";
    return 0;
}
