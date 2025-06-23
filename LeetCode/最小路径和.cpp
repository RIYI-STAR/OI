#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int minPathSum(vector<vector<int>>& grid) {
            
        }
    };


//test
int main(){
    Solution s;
    vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
    cout << s.minPathSum(grid) << endl;
    return 0;
}