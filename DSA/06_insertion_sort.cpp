#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
    int n = arr.size() - 1;
    for (int i = 1; i < n-1; i++)
    {
      int current = arr[i];
      int prev = i-1;

      while (prev >= 0 && arr[prev] > current)
      {
        arr[prev + 1] = arr[prev];
        prev--;
      }
      arr[prev+1] = current; // placing the current element in the correct position
      
    }
    
}
void printArray(const vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {8, 5, 2, 9, 5, 6, 3};
    
    cout << "Original array: ";
    printArray(arr);

    insertionSort(arr);
    
    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}