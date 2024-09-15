#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int n){
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == n)
    {
      return i;
      break;
    }
  }
  return -1;
}
int main(){
int size;
int arr[30];
int num;
cout << "Enter size of array: ";
cin >> size;
for (int i = 0; i < size; i++){
  cin >> arr[i];
}
cout << "Enter number to find: ";
cin >> num;
const int res = linearSearch(arr, size, num);
if (res == -1)
{
  cout << "Number not found" << endl;
}
else{
cout << "Number found at index: " << res << endl;
}


return 0;
}