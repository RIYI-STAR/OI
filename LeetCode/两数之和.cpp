#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
        struct num{
            int val;
            int idx;
        };
    
        static bool cmp(num a, num b){
            return a.val < b.val;
        }
    
        vector<int> twoSum(vector<int> &nums, int target)
        {
            // A+B=C
            vector<num> numbers;
            for (int i = 0; i < nums.size(); i++){
                numbers.push_back({nums[i], i});
            }
            sort(numbers.begin(), numbers.end(), cmp);
    
            int left = 0, right = numbers.size() - 1;
            vector<int> res;
            while (left < right)
            {
                while (left < right && numbers[left].val + numbers[right].val > target)
                    right--;
                if (left < right && numbers[left].val + numbers[right].val == target)
                {
                    res.push_back(numbers[left].idx);
                    res.push_back(numbers[right].idx);
                }
                left++;
            }
            return res;
        }
    
    };