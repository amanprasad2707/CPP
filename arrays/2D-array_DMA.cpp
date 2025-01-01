#include <iostream>
using namespace std;
// how to create 2D array dynamically
int main(){
/*   int n;
  cin >> n; */
  int row, col;
  cin >> row >> col;
  // create a 2D array
  int **arr = new int*[row];
  for (int i = 0; i < row; i++)
  {
    arr[i] = new int[col];
  }

  // taking input
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
    
  }
  cout << endl;
  // printing output
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  
  // release memory
  for (int i = 0; i < row; i++)
  {
    delete []arr[i];
  }
  delete []arr;
  
  
  

  return 0;
}