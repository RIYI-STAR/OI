#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 3, 8, 6, 2, 7, 1, 4, 9, 0};
    for (int i = 1; i < 10; i++)
        for (int j = 0; j < i; j++)
            if (arr[j] > arr[i]){
                int num = arr[i];
                for (int k = i; k > j; k--)
                    arr[k] = arr[k-1];
                arr[j] = num;
            }
    
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}