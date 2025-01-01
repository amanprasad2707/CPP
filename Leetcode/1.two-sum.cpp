/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
// optimized approach O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            int first = nums[i];
            int second = target - first;
            
            if(m.find(second) != m.end()){
                ans.push_back(m[second]);
                ans.push_back(i);
                break;
            }
            m[first] = i;
        }
        return ans;
    }
};
// @lc code=end

