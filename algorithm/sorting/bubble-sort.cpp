#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr){ // O(n²)
  int n = arr.size();
  for (int i = 0; i < n - 1; i++){
    bool isSwap = false; // for optimization
    for (int j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
        isSwap = true;
      }
    }
    if (!isSwap){ // array is already sorted
      return;
    }
  }
}

void printArray(const vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr = {8, 5, 2, 9, 5, 6, 3};

  cout << "Original array: ";
  printArray(arr);

  bubbleSort(arr);

  cout << "Sorted array: ";
  printArray(arr);

  return 0;
}
