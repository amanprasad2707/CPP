#include<iostream>
using namespace std;
void swapAlternate(int arr[], int size){
  for (int i = 0; i < size; i += 2){
    if (i+1 < size){
    swap(arr[i], arr[i + 1]);
    }
  }
}

void printArray(int arr[], int size){
  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main(){
int arr[7] = {1, 2, 3, 4, 5, 6,7};
int size = 7;
cout << "before swapping" << endl;
printArray(arr, size);
swapAlternate(arr, size);
cout << "after swapping" << endl;
printArray(arr, size);
return 0;
}