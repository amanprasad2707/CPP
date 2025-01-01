#include<iostream>
#include<vector>
using namespace std;
/*
based on concept called divide and conquer
steps:
    1. divide the array
    2. merge parts to create a sorted array

time complexity: O(nlogn)
space complexity: O(n)
 */
void merge(vector<int>&arr, int start, int mid, int end){ // time complexity : O(n)
  vector<int> temp;
  int i = start, j = mid+1;
  while(i <= mid && j <= end){
    if(arr[i] < arr[j]){
      temp.push_back(arr[i]);
      i++;
    }
    else{
      temp.push_back(arr[j]);
      j++;
    }
  }
  while(i <= mid){
    temp.push_back(arr[i]);
    i++;
  }
  while (j <= end){
    temp.push_back(arr[j]);
    j++;
  }
  for(int idx = 0; idx < temp.size(); idx++){
    arr[idx + start] = temp[idx];
  }
}

void mergeSort(vector<int>&arr, int start, int end){
  int mid = start +(end - start)/2;
  if(start < end){
  /* left */
  mergeSort(arr, start, mid);
  /* right */
  mergeSort(arr, mid+1, end);
  merge(arr, start, mid, end);
  }
}

void printArray(vector<int> arr){
  for(int i = 0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  vector<int> arr = {12,4,556,434,23,5,34,5,23};
  cout << "Before sorting: ";
  printArray(arr);
  cout << endl;
  mergeSort(arr, 0, arr.size()-1);
  cout << "After sorting: ";
  printArray(arr);
  cout << endl;
return 0;
}