/*
 * @lc app=leetcode id=2596 lang=cpp
 *
 * [2596] Check Knight Tour Configuration
 */
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    return 0;
}
// @lc code=start
// time complexity: O(8ⁿ)²
// space complexity: O(n²)
class Solution
{
public:
    bool isPossible(vector<vector<int>> &grid, int expectedValue, int row, int col, int n)
    {
        if (row < 0 || row >= n || col < 0 || col >= n || grid[row][col] != expectedValue)
        {
            return false;
        }
        if (expectedValue == (n * n) - 1)
        {
            return true;
        }
        int ans1 = isPossible(grid, expectedValue + 1, row - 2, col + 1, n);
        int ans2 = isPossible(grid, expectedValue + 1, row - 1, col + 2, n);
        int ans3 = isPossible(grid, expectedValue + 1, row + 1, col + 2, n);
        int ans4 = isPossible(grid, expectedValue + 1, row + 2, col + 1, n);
        int ans5 = isPossible(grid, expectedValue + 1, row + 2, col - 1, n);
        int ans6 = isPossible(grid, expectedValue + 1, row + 1, col - 2, n);
        int ans7 = isPossible(grid, expectedValue + 1, row - 1, col - 2, n);
        int ans8 = isPossible(grid, expectedValue + 1, row - 2, col - 1, n);
        return ans1 || ans2 || ans3 || ans4 || ans4 || ans5 || ans6 || ans7 || ans8;
    }
    bool checkValidGrid(vector<vector<int>> &grid)
    {
        return isPossible(grid, 0, 0, 0, grid.size());
    }
};
// @lc code=end
