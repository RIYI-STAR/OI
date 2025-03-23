#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 3, 8, 6, 2, 7, 1, 4, 9, 0};
    for (int i = 0; i < 9; i++)
        for (int j = i; j > 0; j--)
            if (arr[j] < arr[j-1])
                swap(arr[j], arr[j-1]);
            
    
    for (int i = 0; i < 9; i++)
        cout << arr[i] << " ";
    return 0;
}