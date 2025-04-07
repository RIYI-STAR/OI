#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 8;
    int ht[8] = {3, 8, 5, 2, 7, 7, 3, 4};
    int res = 0;
    int left = 0, right = n - 1;
    int highestLeft = 0, highestRight = 0;
    while (left < right)
    {
        if (ht[left] > ht[highestLeft]) highestLeft = left;
        left++;
    }
    while (highestLeft < right)
    {
        if (ht[right] > ht[highestRight]) highestRight = right;
        right--;
    }
    cout << min(ht[highestLeft], ht[highestRight])*abs(highestLeft - highestRight) << endl;
    return 0;
}