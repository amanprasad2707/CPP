#include<iostream>
#include<vector>
using namespace std;
/*
based on unique concept called pivot and partition
steps:
    1. pick the pivot
    2. partition
    3. quick sort left 
    4. quick sort right

time complexity:
    average/practical -> O(nlogn)
    worst case -> O(n²) when the pivot is largest or smallest element of the array
space complexity: O(1) -> ignoring the recursion call stack space
 */
int partition (vector<int>&arr, int start, int end){
  int idx = start-1, pivot = arr[end];
  for(int j = start; j<end; j++){
    if(arr[j] <= pivot ){
      idx++;
      swap(arr[idx], arr[j]);
    }
  }
  idx++;
  swap(arr[end], arr[idx]);
  return idx;
}
void quickSort(vector<int> &arr, int start, int end){
  if(start < end){
    int pivotIdx = partition(arr, start, end);
    quickSort(arr, start, pivotIdx-1);  // left half
    quickSort(arr, pivotIdx+1, end);  // right half
  }
}
void printArray(vector<int> arr){
  for(int val: arr){
    cout<< val << " ";
  }
  cout <<endl;
}
int main(){
  vector<int> arr ={4,65,3,234,6,74,234,63,45345,242,23,53,634,5};
  cout << "Before sorting: ";
  printArray(arr);
  cout << endl;
  quickSort(arr, 0, arr.size()-1);
  cout << "After sorting: ";
  printArray(arr);
  cout << endl;
return 0;
}