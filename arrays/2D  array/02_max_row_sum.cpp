#include <iostream>
using namespace std;
int maxRowSum(int matrix[3][4], int rows, int cols){
  int maxRowSum = INT8_MIN;
  for (int i = 0; i < rows; i++){
    int rowSum = 0;
    for (int j = 0; j < cols; j++){
      rowSum += matrix[i][j];
    }
    maxRowSum = max(maxRowSum, rowSum);
  }
  return maxRowSum;
}
int maxColSum(int matrix[3][4], int rows, int cols){
  int maxColSum = INT8_MIN;
  for (int i = 0; i < cols; i++){
    int colSum = 0;
    for (int j = 0; j < rows; j++){
      colSum += matrix[j][i];
    }
    maxColSum = max(maxColSum, colSum);
  }
  return maxColSum;
}
int main(){
  int matrix[3][4] = {{1, 2, 30, 40}, {5, 6, 7, 8}, {10, 11, 12, 13}};
  cout << maxRowSum(matrix, 3, 4) << endl;
  cout << maxColSum(matrix, 3, 4) << endl;
  return 0;
}

