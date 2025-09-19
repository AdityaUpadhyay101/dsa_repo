
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute force approach: check every pair
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                // If sum equals target, return indices
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution solution;
    
    // Test Case 1: [2,7,11,15], target = 9
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);

      cout << "Result: [" << result1[0] << ", " << result1[1] << "]" << endl;
    cout << "Verification: " << nums1[result1[0]] << " + " << nums1[result1[1]] 
         << " = " << nums1[result1[0]] + nums1[result1[1]] << endl;
    
            return 0;
}
    