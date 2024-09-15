// sum of all elements of an array
#include<iostream>
using namespace std;
int sumOfElements(int arr[], int size){
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}
int main(){
int size;
int arr[30];
cout << "Enter size of array: " << endl;
cin >> size;
cout << "Enter elements of array: " << endl;
for (int i = 0; i < size; i++)
{
  cin >> arr[i];
}
cout << "Sum of elements of array: " << sumOfElements(arr, size) << endl;

return 0;
}