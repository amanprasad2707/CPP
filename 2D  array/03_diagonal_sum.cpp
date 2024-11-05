#include <iostream>
#include <vector>
using namespace std;
int diagonalSum(int matrix[][4], int n) /* O(n²) */
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        sum += matrix[i][j]; // sum of primary diagonal elements
      }
      else if (j == n - i - 1)
      {
        sum += matrix[i][j]; // sum of secondary diagonal elements
      }
    }
  }
  return sum;
}
/* optimized method */
int diagonalSumOptimized(vector<vector<int>>matrix) /* O(n) */
{
  /*
  primary diagonal: j = i
  secondary diagonal: j n - i - 1
  rows = matrix.size()
  cols = matrix[i].size() => how many elements in a row
   */
  int n = matrix.size();
  cout << "matrix size: " << n << endl;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += matrix[i][i];
    if (i != n - i - 1)
    {
      sum += matrix[i][n - i - 1];
    }
  }
  return sum;
}
int main()
{
  vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int matrix[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int n = 4;
  cout << diagonalSum(matrix, n) << endl;
  cout << diagonalSumOptimized(mat) << endl;
  return 0;
}