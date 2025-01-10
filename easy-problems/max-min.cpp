// program to print the maximum and minimum values in an array
#include<iostream>
#include <cstdint>
using namespace std;

int printMin(int arr[], int size){
  int min = INT32_MAX;
  for (int i = 0; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int printMax(int arr[], int size){
  int max = INT32_MIN;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    // max = max(max, arr[i]);
  }
  return max;
}

int main(){
  int arr[100];
  int size;
  
  cout << "Enter the size of the array: ";
  cin >> size;
  
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  
  cout << "Max number in the array: " << printMax(arr, size) << endl;
  cout << "Min number in the array: " << printMin(arr, size) << endl;

  return 0;
}
