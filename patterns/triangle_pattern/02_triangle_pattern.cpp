/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include<iostream>
using namespace std;
int main(){
  int num;
  cout << "Enter number: ";
  cin >> num;
  for (int i = 1; i <= num; i++){
    for (int j = 1; j < i+1; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  
  return 0;
}