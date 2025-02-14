/*
 * @lc app=leetcode id=503 lang=cpp
 *
 * [503] Next Greater Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        stack<int> s;
        for(int i = (2*n)-1; i >= 0; i--){
            int idx = i%n;
            while (s.size() > 0 && nums[s.top()] <= nums[idx]){
                s.pop();
            }
            ans[idx] = s.empty() ? -1 : nums[s.top()];
            s.push(idx);
        }
        return ans;
    }
};
// @lc code=end

