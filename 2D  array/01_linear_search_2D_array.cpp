#include <iostream>
using namespace std;
pair<int, int> linear_search(int matrix[3][4], int rows, int cols, int target)
{
  pair<int, int> ans={-1,-1};
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == target)
      {
        ans.first = i;
        ans.second = j;
        return ans;
      }
    }
  }
  ans.first = -1;
  ans.second = -1;
  return ans;
}
int main()
{
  int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {10, 11, 12, 13}};
    pair<int, int> result = linear_search(matrix, 3, 4, 7);
    
    if (result.first == -1 && result.second == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at position: (" << result.first << ", " << result.second << ")" << endl;
    }

    return 0;
  return 0;
}