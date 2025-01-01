/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */
#include <vector>
#include <set>
using namespace std;

// @lc code=start

class Solution{
public:
    set<vector<int>> s;
    void helper(vector<int> &arr, int target, vector<int> &combination, int i, vector<vector<int>> &ans){
        if (target == 0){
            if (s.find(combination) == s.end()){
                ans.push_back(combination);
                s.insert(combination);
            }
            return;
        }
        if (target < 0 || i == arr.size()){
            return;
        }
        combination.push_back(arr[i]);
        helper(arr, target - arr[i], combination, i + 1, ans); // single inclusion
        helper(arr, target - arr[i], combination, i, ans);     // multiple inclusion
        combination.pop_back();                                // backtracking
        helper(arr, target, combination, i + 1, ans);          // exclusion
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target){
        vector<vector<int>> ans;
        vector<int> combination;
        helper(candidates, target, combination, 0, ans);
        return ans;
    }
};
// @lc code=end
