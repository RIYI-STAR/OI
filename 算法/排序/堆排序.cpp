#include <iostream>
using namespace std;

void heapSortUp(int* heap, int index){
    if (index > 1)
    {
        int i = index/2;
        if (heap[index] < heap[i])
            swap(heap[index], heap[i]);
        heapSortUp(heap, i);
    }
}

void heapSortDown(int* heap, int index, int size){
    if(index*2 < size){
        int i = index*2;
        if (i+1 < size) i = (heap[index*2]<heap[index*2+1])?index*2:(index*2+1);
        if(heap[i]<heap[index])
            swap(heap[i], heap[index]);
        heapSortDown(heap, i, size);
    }
}

void pop(int* heap, int index, int* size){
    swap(heap[index], heap[*size-1]);
    (*size)--;
    heapSortDown(heap, index, *size);
}

int main(){
    int size = 6;
    int arr[6] = {-1,6,1,4,9,0};
    int* heap = new int[size];

    for (int i=1;i<size;i++){
        heap[i] = arr[i];
        heapSortUp(heap, i);
    }

    
    int n = size;
    for(int i=1;i<n;i++){
        for(int j=1;j<size;j++)cout << heap[j] <<' ';
        cout << endl;
        pop(heap, 1, &size);
    }

    return 0;
}

