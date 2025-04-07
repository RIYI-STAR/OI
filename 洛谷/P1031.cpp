// P1031 [NOIP 2002 提高组] 均分纸牌
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++)
        cin >> cards[i];

    int ans = 0;
    int average;
    int sum = 0;

    for (int i = 0; i < N; i++)
        sum += cards[i];
    average = sum / N;

    for (int i = 0; i < N; i++)
    {
        int temp = cards[i] - average;

        if (temp) ans++;
        cards[i] -= temp;
        cards[i + 1] += temp;
    }

    cout << ans << endl;
}