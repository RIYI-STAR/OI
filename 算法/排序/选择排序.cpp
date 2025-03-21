#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 3, 8, 6, 2, 7, 1, 4, 9, 0};
    for (int i = 0; i < 10; i++) 
        for (int j = i + 1; j < 10; j++)
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
    
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}