/*

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

#include<iostream>
using namespace std;
int main(){
  int num;
  cout << "Enter number: ";
  cin >> num;
  for (int i = 0; i <= num; i++){
    for (int j = i; j > 0; j--)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  
  return 0;
}