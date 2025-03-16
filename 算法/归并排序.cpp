#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    
    vector<int> temp;
    int i = left, j = mid + 1;
    while(i <= mid && j <= right){
        if(arr[i]<=arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    for(i;i <= mid;i++) temp.push_back(arr[i]);
    for(j;j <= right;j++) temp.push_back(arr[j]);

    for(int k = left;k <= right;k++) arr[k] = temp[k - left];
}

void mergeSort(vector<int>& arr, int left, int right){

    if(left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {  
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    mergeSort(arr, 0, arr.size() - 1);
    for(int i = 0;i < arr.size();i++) cout << arr[i] << " ";
}
