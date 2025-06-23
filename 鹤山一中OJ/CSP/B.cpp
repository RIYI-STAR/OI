#include <iostream>
#include <vector>
using namespace std;

void move(char src, char tgt) {
    cout << "从柱子" << src << "挪到柱子" << tgt << endl;
}

void dfs(int i, char src, char tmp, char tgt) {
    if (i == 1) {
        move(src, tgt);
        return;
    }
    dfs(i - 1, src, tgt, tmp);
    move(src, tgt);
    dfs(i - 1, tmp, src, tgt);
}

int main() {
    int n;
    cin >> n;
    dfs(n, 'A', 'B', 'C');
}