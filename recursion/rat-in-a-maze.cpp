#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
  public:
  void helper(vector<vector<int>> &mat, int row, int col,const string &path, vector<string> &ans, vector<vector<bool>> &visited){
      int n = mat.size();
      // Handling base case
      if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0 || visited[row][col]) {
          return;
      }
      if (row == n-1 && col == n-1) {
          ans.push_back(path);
          return;
      }
      visited[row][col] = true;

      // Move Left
      helper(mat, row, col-1, path + "L", ans, visited);

      // Move Right
      helper(mat, row, col+1, path + "R", ans, visited);

      // Move Up
      helper(mat, row-1, col, path + "U", ans, visited);

      // Move Down
      helper(mat, row+1, col, path + "D", ans, visited);

      visited[row][col] = false;
  }

  vector<string> findPath(vector<vector<int>> &mat) {
      int n = mat.size();
      vector<string> ans;
      vector<vector<bool>> visited(n, vector<bool>(n, false));
      string path = "";
      helper(mat, 0, 0, path, ans, visited);
      return ans;
  }
};

int main() {
    Solution obj;

    // Input Matrix
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    // Find paths
    vector<string> result = obj.findPath(mat);

    // Output the result
    if (result.empty()) {
        cout << "No path found!" << endl;
    } else {
        cout << "Paths found:" << endl;
        for (const string &path : result) {
            cout << path << endl;
        }
    }

    return 0;
}
