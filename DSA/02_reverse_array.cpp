#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
  for (int i = 0; i < size/2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[size-1-i];
    arr[size-1-i] = temp;
  }
  return;
}
void reverseArray1(int arr[], int size){
  int start = 0;
  int end = size-1;
  while (start < end)
  {
    // int temp = arr[start];
    // arr[start] = arr[end];
    // arr[end] = temp;
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  return;
}
void printArray(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return;
}
int main(){
int arr[10] = {0,1,2,3,4,5,6,7,8,9};
cout << "Array before reversing: " << endl;
printArray(arr, 10);
reverseArray1(arr, 10);
cout << "Array after reversing: " << endl;
printArray(arr, 10);
return 0;
}