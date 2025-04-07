#include <iostream>
#include <vector>
using namespace std;

// 添加边
void addEdge(vector<vector<int>>& map, int u, int v) {
    map[u][v] = 1;
    map[v][u] = 1;
}

// 删除边
void delEdge(vector<vector<int>>& map, int u, int v) {
    map[u][v] = 0;
    map[v][u] = 0;
}

// 打印邻接矩阵
void printMap(vector<vector<int>>& map) {
    for (int i = 0; i < map.size(); i++) {
        for (int j = 0; j < map[i].size(); j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}

void addPoints(vector<vector<int>>& map) {
    map.push_back(vector<int>(map[0].size(), 0));
    for (int i = 0; i < map.size(); i++) 
        map[i].push_back(0);
}

void delPoints(vector<vector<int>>& map, int index) {
    map.erase(map.begin() + index);
    for (int i = 0; i < map.size(); i++) {
        map[i].erase(map[i].begin() + index);
    }
}

int main() { 
    vector<int> arr = {4, 6 ,8, 9};
    vector<vector<int>> map = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0}
    };
    printMap(map);
    cout << endl;
    addPoints(map);
    printMap(map);
    cout << endl;
    delPoints(map, 3);
    printMap(map);
    return 0;
}