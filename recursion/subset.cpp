#include <iostream>
#include <vector>
using namespace std;
class Solution {
    /* time complexity => O(n * 2ⁿ) */
public:
    void getSubsets(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &allSubsets) {
        if (i == arr.size()) {
            allSubsets.push_back(ans);
            return;
        }
        // include
        ans.push_back(arr[i]);
        cout << "include: " << i << "\n";
        getSubsets(arr, ans, i + 1, allSubsets);
        ans.pop_back();
        // exclude
        cout << "exclude: " << i << "\n";
        getSubsets(arr, ans, i + 1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        getSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};

// Main function to test the code
int main() {
    Solution solution;
    vector<int> arr = {1, 2, 3}; // Input array

    // Generate subsets
    vector<vector<int>> result = solution.subsets(arr);

    

    return 0;
}
